#ifndef FILA_H
#define FILA_H

typedef struct {
    char nome[50];
    int idade;
} Paciente;

void enfileirar(char nome[], int idade);
void desenfileirar();
void exibirFila();

#endif