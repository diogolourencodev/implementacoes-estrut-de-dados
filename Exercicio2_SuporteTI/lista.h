#ifndef LISTA_H
#define LISTA_H

void adicionarEquipamento(
    int patrimonio,
    char tipo[],
    char localizacao[]
);

void buscarEquipamento(int patrimonio);
void removerEquipamento(int patrimonio);
void listarEquipamentos();

#endif