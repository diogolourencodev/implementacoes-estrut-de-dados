#include <stdio.h>
#include <string.h>
#include "pilha.h"

#define MAX 100

typedef struct
{
    char nome[50];
    char especialidade[50];
} Atendimento;

Atendimento pilha[MAX];

int topo = -1;

void registrarAtendimento(
    char nome[],
    char especialidade[]
)
{
    if(topo >= MAX - 1)
    {
        printf("Pilha cheia\n");
        return;
    }

    topo++;

    strcpy(
        pilha[topo].nome,
        nome
    );

    strcpy(
        pilha[topo].especialidade,
        especialidade
    );
}

void desfazerAtendimento()
{
    if(topo==-1)
    {
        printf("Historico vazio\n");
        return;
    }

    printf("Removido: %s\n",pilha[topo].nome);

    topo--;
}

void exibirHistorico()
{
    int i;

    printf("\nHistorico\n");

    for(i=topo;i>=0;i--)
    {
        printf("%s - %s\n",
               pilha[i].nome,
               pilha[i].especialidade);
    }
}