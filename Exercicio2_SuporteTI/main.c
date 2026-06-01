#include <stdio.h>

#include "fila.h"
#include "pilha.h"
#include "lista.h"

int main()
{
    abrirChamado(
        101,
        "Internet caiu"
    );

    abrirChamado(
        102,
        "Impressora nao funciona"
    );

    abrirChamado(
        103,
        "Computador nao liga"
    );

    listarChamados();

    atenderChamado();

    listarChamados();

    registrarAcao(
        "Reiniciou servidor"
    );

    registrarAcao(
        "Alterou IP"
    );

    registrarAcao(
        "Resetou switch"
    );

    mostrarHistorico();

    desfazerAcao();

    mostrarHistorico();

    adicionarEquipamento(
        1001,
        "Servidor",
        "Sala TI"
    );

    adicionarEquipamento(
        1002,
        "Switch",
        "Rack Principal"
    );

    listarEquipamentos();

    buscarEquipamento(1001);

    removerEquipamento(1002);

    listarEquipamentos();

    return 0;
}