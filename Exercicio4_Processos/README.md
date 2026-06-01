# Exercício 4 - Sistema de Escalonamento de Processos

## Descrição

Este projeto simula um sistema operacional simplificado responsável pelo gerenciamento e escalonamento de processos. O sistema utiliza diferentes estruturas de dados para controlar processos em execução, processos encerrados e processos aguardando utilização da CPU.

Além disso, foi implementada uma fila de prioridade para garantir que processos mais importantes sejam executados antes dos demais.

## Objetivo

Aplicar os conceitos de Fila, Pilha, Lista Encadeada e Fila de Prioridade em um cenário semelhante ao funcionamento de um sistema operacional.

## Estruturas de Dados Utilizadas

### Fila de Prioridade

Responsável por armazenar os processos que aguardam execução na CPU.

**Dados armazenados:**

* PID
* Nome do processo
* Prioridade

**Operações implementadas:**

* Inserir processo
* Executar processo mais prioritário
* Exibir fila de processos

### Pilha de Processos Encerrados

Responsável por manter um histórico dos processos finalizados.

**Dados armazenados:**

* PID
* Motivo do encerramento

**Operações implementadas:**

* Registrar processo encerrado
* Remover último registro
* Exibir histórico

### Lista Encadeada de Processos Ativos

Responsável por armazenar os processos que estão atualmente ativos no sistema.

**Dados armazenados:**

* PID
* Nome
* Estado

**Operações implementadas:**

* Adicionar processo
* Buscar processo
* Remover processo
* Listar processos ativos

## Tecnologias Utilizadas

* Linguagem C
* Estruturas de Dados

  * Fila de Prioridade
  * Pilha
  * Lista Encadeada

## Como Compilar

```bash
gcc exercicio4.c -o exercicio4
```

## Como Executar

### Linux

```bash
./exercicio4
```

### Windows

```bash
exercicio4.exe
```

## Exemplo de Execução

### Processos Cadastrados

#### Processo / Prioridade 
 Antivírus / 10         
 Navegador / 3          
 Editor de Texto / 2          

### Ordem de Execução

1. Antivírus
2. Navegador
3. Editor de Texto

O processo **Antivírus** será executado primeiro por possuir a maior prioridade.

## Funcionamento do Sistema

1. Os processos são adicionados à fila de prioridade.
2. O escalonador seleciona o processo com maior prioridade.
3. Os processos ativos são mantidos em uma lista encadeada.
4. Quando um processo é encerrado, suas informações são registradas na pilha de histórico.