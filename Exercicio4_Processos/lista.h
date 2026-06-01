#ifndef LISTA_H
#define LISTA_H

void adicionarAtivo(
    int pid,
    char nome[],
    char estado[]
);

void listarAtivos();
void buscarAtivo(int pid);
void removerAtivo(int pid);

#endif