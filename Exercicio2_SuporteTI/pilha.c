#include <stdio.h>
#include <string.h>
#include "pilha.h"

#define MAX 100

char pilha[MAX][100];

int topo = -1;

void registrarAcao(char acao[])
{
    topo++;

    strcpy(pilha[topo], acao);
}

void desfazerAcao()
{
    if(topo==-1)
    {
        printf("Nenhuma acao registrada\n");
        return;
    }

    printf("Desfeita: %s\n",
           pilha[topo]);

    topo--;
}

void mostrarHistorico()
{
    int i;

    printf("\nHistorico de Logs\n");

    for(i=topo;i>=0;i--)
    {
        printf("%s\n",
               pilha[i]);
    }
}