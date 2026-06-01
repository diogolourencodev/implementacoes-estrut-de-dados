#include <stdio.h>

#include "fila.h"
#include "pilha.h"
#include "lista.h"

int main()
{
    enfileirar("Joao",25);
    enfileirar("Maria",40);
    enfileirar("Carlos",31);
    enfileirar("Ana",28);

    exibirFila();

    desenfileirar();
    desenfileirar();

    exibirFila();

    registrarAtendimento("Joao","Clinico");
    registrarAtendimento("Maria","Cardiologia");

    exibirHistorico();

    desfazerAtendimento();

    exibirHistorico();

    cadastrarPaciente(
        "Joao",
        "111",
        "219999"
    );

    cadastrarPaciente(
        "Maria",
        "222",
        "218888"
    );

    listarPacientes();

    buscarPaciente("111");

    removerPaciente("222");

    listarPacientes();

    return 0;
}