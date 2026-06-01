#ifndef FILA_PRIORIDADE_H
#define FILA_PRIORIDADE_H

void inserirProcesso(
    int pid,
    char nome[],
    int prioridade
);

void executarProcesso();
void listarFila();

#endif