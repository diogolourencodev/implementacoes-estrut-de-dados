# Exercício 2 - Sistema de Rede / TI

## Descrição

Este projeto simula um sistema simplificado de suporte técnico para uma empresa. O sistema utiliza estruturas de dados para organizar chamados de usuários, registrar ações administrativas e gerenciar equipamentos da rede.

O objetivo é demonstrar a aplicação prática de Fila, Pilha e Lista Encadeada em um ambiente de Tecnologia da Informação (TI).


## Objetivo

Desenvolver um sistema capaz de controlar chamados de suporte, armazenar logs de ações realizadas pelos administradores e gerenciar o cadastro de equipamentos da empresa.


## Estruturas de Dados Utilizadas

### Fila de Chamados

Utilizada para organizar os chamados de suporte por ordem de chegada.

**Dados armazenados:**

* Número do ticket
* Descrição do problema

**Operações implementadas:**

* Abrir chamado
* Atender próximo chamado
* Listar chamados pendentes

### Pilha de Logs

Utilizada para armazenar as ações realizadas pelo administrador da rede.

**Exemplos de ações:**

* Reiniciar servidor
* Alterar endereço IP
* Resetar switch

**Operações implementadas:**

* Registrar ação
* Desfazer última ação
* Mostrar histórico

### Lista Encadeada de Equipamentos

Utilizada para manter o cadastro dos equipamentos da empresa.

**Dados armazenados:**

* Patrimônio
* Tipo do equipamento
* Localização

**Operações implementadas:**

* Adicionar equipamento
* Buscar equipamento
* Remover equipamento
* Listar equipamentos


## Tecnologias Utilizadas

* Linguagem C
* Estruturas de Dados

  * Fila
  * Pilha
  * Lista Encadeada

## Como Compilar

```bash id="cbhdo6"
gcc exercicio2.c -o exercicio2
```

## Como Executar

### Linux

```bash id="bgvgzl"
./exercicio2
```

### Windows

```bash id="h7m2f7"
exercicio2.exe
```

## Exemplo de Uso

### Chamados Recebidos

* Ticket 101 → Internet caiu
* Ticket 102 → Impressora não funciona
* Ticket 103 → Computador não liga

### Ações Registradas

* Reiniciou servidor
* Alterou IP
* Resetou switch

### Equipamentos Cadastrados

* Computador
* Impressora
* Switch
* Roteador
