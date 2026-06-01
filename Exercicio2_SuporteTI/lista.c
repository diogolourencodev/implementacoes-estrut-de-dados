#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

typedef struct No
{
    int patrimonio;
    char tipo[50];
    char localizacao[50];

    struct No *prox;

} No;

No *inicioLista = NULL;

void adicionarEquipamento(
    int patrimonio,
    char tipo[],
    char localizacao[]
)
{
    No *novo = malloc(sizeof(No));

    novo->patrimonio = patrimonio;

    strcpy(novo->tipo, tipo);
    strcpy(novo->localizacao, localizacao);

    novo->prox = inicioLista;

    inicioLista = novo;
}

void buscarEquipamento(int patrimonio)
{
    No *aux = inicioLista;

    while(aux)
    {
        if(aux->patrimonio == patrimonio)
        {
            printf("Encontrado: %s\n",
                   aux->tipo);

            return;
        }

        aux = aux->prox;
    }

    printf("Equipamento nao encontrado\n");
}

void removerEquipamento(int patrimonio)
{
    No *atual = inicioLista;
    No *anterior = NULL;

    while(atual)
    {
        if(atual->patrimonio == patrimonio)
        {
            if(anterior == NULL)
                inicioLista = atual->prox;
            else
                anterior->prox = atual->prox;

            free(atual);

            printf("Equipamento removido\n");

            return;
        }

        anterior = atual;
        atual = atual->prox;
    }

    printf("Equipamento nao encontrado\n");
}

void listarEquipamentos()
{
    No *aux = inicioLista;

    printf("\nEquipamentos\n");

    while(aux)
    {
        printf("%d | %s | %s\n",
               aux->patrimonio,
               aux->tipo,
               aux->localizacao);

        aux = aux->prox;
    }
}