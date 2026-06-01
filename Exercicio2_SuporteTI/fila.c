#include <stdio.h>
#include <string.h>
#include "fila.h"

#define MAX 100

typedef struct
{
    int ticket;
    char descricao[100];

} Chamado;

Chamado fila[MAX];

int inicio = 0;
int fim = -1;

void abrirChamado(
    int ticket,
    char descricao[]
)
{
    if(fim >= MAX - 1)
    {
        printf("Fila cheia\n");
        return;
    }

    fim++;

    fila[fim].ticket = ticket;

    strcpy(
        fila[fim].descricao,
        descricao
    );
}

void atenderChamado()
{
    if(inicio > fim)
    {
        printf("Nenhum chamado pendente\n");
        return;
    }

    printf("Atendendo Ticket %d\n",
           fila[inicio].ticket);

    inicio++;
}

void listarChamados()
{
    int i;

    printf("\nChamados Pendentes\n");

    for(i=inicio;i<=fim;i++)
    {
        printf("Ticket %d - %s\n",
               fila[i].ticket,
               fila[i].descricao);
    }
}