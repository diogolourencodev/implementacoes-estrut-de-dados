# Exercício 1 - Sistema de Atendimento de Clínica

## Descrição

Este projeto simula o funcionamento básico de uma clínica médica utilizando estruturas de dados em C. O sistema permite controlar a fila de espera dos pacientes, registrar históricos de atendimento e gerenciar o cadastro dos pacientes.



## Objetivo

Aplicar os conceitos de Fila, Pilha e Lista Encadeada em uma situação prática de atendimento médico.



## Estruturas de Dados Utilizadas

### Fila (Recepção)

Responsável por organizar os pacientes por ordem de chegada.

**Dados armazenados:**

* Nome
* Idade

**Operações implementadas:**

* Cadastrar paciente
* Chamar próximo paciente
* Exibir fila de espera

### Pilha (Histórico de Atendimentos)

Responsável por armazenar os atendimentos realizados.

**Dados armazenados:**

* Nome do paciente
* Especialidade atendida

**Operações implementadas:**

* Registrar atendimento
* Desfazer último registro
* Exibir histórico

### Lista Encadeada (Cadastro de Pacientes)

Responsável pelo gerenciamento dos pacientes cadastrados.

**Dados armazenados:**

* Nome
* CPF
* Telefone

**Operações implementadas:**

* Cadastrar paciente
* Buscar paciente
* Remover paciente
* Listar pacientes


## Tecnologias Utilizadas

* Linguagem C
* Estruturas de Dados

  * Fila
  * Pilha
  * Lista Encadeada

## Como Compilar

```bash
gcc exercicio1.c -o exercicio1
```

## Como Executar

```bash
./exercicio1
```

No Windows:

```bash
exercicio1.exe
```

---

## Exemplo de Teste

Pacientes inseridos na fila:

* João, 25 anos
* Maria, 40 anos
* Carlos, 31 anos
* Ana, 28 anos

Após chamar 2 pacientes:

Fila restante:

* Carlos, 31 anos
* Ana, 28 anos

---

## Perguntas Teóricas

### 1. Por que fila é ideal para recepção?

A fila segue o princípio FIFO (First In, First Out), onde o primeiro paciente a chegar é o primeiro a ser atendido. Isso garante organização, justiça e respeito à ordem de chegada.

### 2. Por que pilha serve para desfazer ações?

A pilha utiliza o princípio LIFO (Last In, First Out). Como a última ação realizada fica no topo da pilha, ela pode ser removida facilmente quando for necessário desfazer uma operação.

### 3. Por que lista encadeada é melhor que vetor para cadastros dinâmicos?

A lista encadeada permite inserções e remoções sem necessidade de redimensionar ou deslocar elementos, tornando-a mais eficiente para sistemas em que a quantidade de registros varia constantemente.

---
