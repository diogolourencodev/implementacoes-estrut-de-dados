#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct
{
    int pid;
    char nome[50];
    int prioridade;

} Processo;

Processo fila[MAX];

int total = 0;

void inserirProcesso(
    int pid,
    char nome[],
    int prioridade
)
{
    int i;

    if(total >= MAX)
    {
        printf("Fila cheia\n");
        return;
    }

    fila[total].pid = pid;

    strcpy(
        fila[total].nome,
        nome
    );

    fila[total].prioridade =
        prioridade;

    total++;

    for(i=total-1;i>0;i--)
    {
        if(
            fila[i].prioridade >
            fila[i-1].prioridade
        )
        {
            Processo aux =
                fila[i];

            fila[i] =
                fila[i-1];

            fila[i-1] =
                aux;
        }
    }
}

void executarProcesso()
{
    int i;

    if(total==0)
    {
        printf(
            "Fila vazia\n"
        );

        return;
    }

    printf(
        "Executando %s\n",
        fila[0].nome
    );

    for(i=0;i<total-1;i++)
    {
        fila[i] =
            fila[i+1];
    }

    total--;
}

void listarFila()
{
    int i;

    printf(
        "\nFila de Prioridade\n"
    );

    for(i=0;i<total;i++)
    {
        printf(
            "PID:%d Nome:%s Prioridade:%d\n",
            fila[i].pid,
            fila[i].nome,
            fila[i].prioridade
        );
    }
}