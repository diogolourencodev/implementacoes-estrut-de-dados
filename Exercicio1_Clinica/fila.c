#include <stdio.h>
#include <string.h>
#include "fila.h"

#define MAX 100

Paciente fila[MAX];
int inicio = 0;
int fim = -1;

void enfileirar(char nome[], int idade)
{
    if(fim >= MAX - 1)
    {
        printf("Fila cheia\n");
        return;
    }

    fim++;

    strcpy(fila[fim].nome, nome);
    fila[fim].idade = idade;
}

void desenfileirar()
{
    if(inicio > fim)
    {
        printf("Fila vazia\n");
        return;
    }

    printf("Paciente chamado: %s\n", fila[inicio].nome);

    inicio++;
}

void exibirFila()
{
    int i;

    printf("\nFila de Espera\n");

    for(i=inicio;i<=fim;i++)
    {
        printf("%s - %d anos\n",
               fila[i].nome,
               fila[i].idade);
    }
}