#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No
{
    int pid;

    char nome[50];

    char estado[30];

    struct No *prox;

} No;

No *inicioLista = NULL;

void adicionarAtivo(
    int pid,
    char nome[],
    char estado[]
)
{
    No *novo =
        malloc(sizeof(No));

    novo->pid = pid;

    strcpy(
        novo->nome,
        nome
    );

    strcpy(
        novo->estado,
        estado
    );

    novo->prox =
        inicioLista;

    inicioLista =
        novo;
}

void listarAtivos()
{
    No *aux =
        inicioLista;

    printf(
        "\nProcessos Ativos\n"
    );

    while(aux)
    {
        printf(
            "PID:%d Nome:%s Estado:%s\n",
            aux->pid,
            aux->nome,
            aux->estado
        );

        aux =
            aux->prox;
    }
}

void buscarAtivo(
    int pid
)
{
    No *aux =
        inicioLista;

    while(aux)
    {
        if(aux->pid==pid)
        {
            printf(
                "Encontrado: %s\n",
                aux->nome
            );

            return;
        }

        aux =
            aux->prox;
    }

    printf(
        "Nao encontrado\n"
    );
}

void removerAtivo(
    int pid
)
{
    No *atual =
        inicioLista;

    No *anterior =
        NULL;

    while(atual)
    {
        if(atual->pid==pid)
        {
            if(anterior==NULL)
            {
                inicioLista =
                    atual->prox;
            }
            else
            {
                anterior->prox =
                    atual->prox;
            }

            free(atual);

            printf(
                "Removido\n"
            );

            return;
        }

        anterior =
            atual;

        atual =
            atual->prox;
    }
}