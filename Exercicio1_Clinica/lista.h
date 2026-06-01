#ifndef LISTA_H
#define LISTA_H

void cadastrarPaciente(
    char nome[],
    char cpf[],
    char telefone[]
);

void listarPacientes();
void buscarPaciente(char cpf[]);
void removerPaciente(char cpf[]);

#endif