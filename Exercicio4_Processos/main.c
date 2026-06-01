#include <stdio.h>
#include "fila_prioridade.h"
#include "pilha.h"
#include "lista.h"

int main()
{
    inserirProcesso(
        1,
        "Antivirus",
        10
    );

    inserirProcesso(
        2,
        "Navegador",
        3
    );

    inserirProcesso(
        3,
        "Editor",
        2
    );

    listarFila();

    executarProcesso();

    listarFila();

    adicionarAtivo(
        1,
        "Antivirus",
        "Executando"
    );

    adicionarAtivo(
        2,
        "Navegador",
        "Pronto"
    );

    listarAtivos();

    buscarAtivo(2);

    encerrarProcesso(
        1,
        "Finalizado"
    );

    mostrarHistorico();

    desfazerEncerramento();

    removerAtivo(1);

    listarAtivos();

    return 0;
}