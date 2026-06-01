#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

typedef struct No
{
    char nome[50];
    char cpf[20];
    char telefone[20];

    struct No *prox;

}No;

No *inicioLista = NULL;

void cadastrarPaciente(
    char nome[],
    char cpf[],
    char telefone[]
)
{
    No *novo = malloc(sizeof(No));

    strcpy(novo->nome,nome);
    strcpy(novo->cpf,cpf);
    strcpy(novo->telefone,telefone);

    novo->prox = inicioLista;

    inicioLista = novo;
}

void listarPacientes()
{
    No *aux = inicioLista;

    printf("\nPacientes\n");

    while(aux)
    {
        printf("%s | %s | %s\n",
               aux->nome,
               aux->cpf,
               aux->telefone);

        aux = aux->prox;
    }
}

void buscarPaciente(char cpf[])
{
    No *aux = inicioLista;

    while(aux)
    {
        if(strcmp(aux->cpf,cpf)==0)
        {
            printf("Encontrado: %s\n",
                   aux->nome);

            return;
        }

        aux = aux->prox;
    }

    printf("Paciente nao encontrado\n");
}

void removerPaciente(char cpf[])
{
    No *atual = inicioLista;
    No *anterior = NULL;

    while(atual)
    {
        if(strcmp(atual->cpf,cpf)==0)
        {
            if(anterior==NULL)
                inicioLista = atual->prox;
            else
                anterior->prox = atual->prox;

            free(atual);

            printf("Paciente removido\n");

            return;
        }

        anterior = atual;
        atual = atual->prox;
    }

    printf("Paciente nao encontrado\n");
}