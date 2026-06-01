#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct
{
    int pid;
    char motivo[100];

} Encerrado;

Encerrado pilha[MAX];

int topo = -1;

void encerrarProcesso(
    int pid,
    char motivo[]
)
{
    topo++;

    pilha[topo].pid =
        pid;

    strcpy(
        pilha[topo].motivo,
        motivo
    );
}

void desfazerEncerramento()
{
    if(topo==-1)
    {
        printf(
            "Historico vazio\n"
        );

        return;
    }

    printf(
        "Restaurado PID %d\n",
        pilha[topo].pid
    );

    topo--;
}

void mostrarHistorico()
{
    int i;

    printf(
        "\nProcessos Encerrados\n"
    );

    for(i=topo;i>=0;i--)
    {
        printf(
            "PID:%d Motivo:%s\n",
            pilha[i].pid,
            pilha[i].motivo
        );
    }
}