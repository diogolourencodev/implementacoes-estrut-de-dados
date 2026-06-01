# Exercício 5 - Simulação de Redes de Computadores

## Autores
Angelo Pereira Rocha<br>
Thiago Guimarães<br>
Diogo S. Lourenço<br>
Matheus Dias Moutinho<br>
Victor Hugo Sanches<br>
Victor Hugo Nascimento

## Introdução

Em uma rede de computadores, os dados são divididos em pacotes que trafegam entre dispositivos até chegar ao destino. Durante esse processo, os pacotes podem aguardar transmissão, sofrer falhas ou serem entregues com sucesso.

Este projeto simula esse cenário utilizando estruturas de dados clássicas da Ciência da Computação.

## Objetivo

Demonstrar a aplicação de Fila, Pilha e Lista Encadeada no gerenciamento de pacotes em uma rede de computadores.

## Estruturas de Dados Utilizadas

### Fila – Pacotes Aguardando Transmissão

A fila representa os pacotes que chegaram à interface de rede e aguardam envio.

**Operações:**

* Adicionar pacote
* Transmitir próximo pacote
* Exibir fila

**Características:**

* Primeiro a entrar, primeiro a sair (FIFO)
* Simula a ordem real de transmissão dos pacotes

### Pilha – Pacotes com Erro

A pilha armazena os pacotes que falharam durante a transmissão.

**Operações:**

* Registrar erro
* Retransmitir pacote
* Exibir pilha

**Características:**

* Último a entrar, primeiro a sair (LIFO)
* Permite tratar rapidamente os erros mais recentes

### Lista Encadeada – Pacotes Ativos

A lista encadeada mantém os pacotes que estão circulando na rede.

**Dados armazenados:**

* ID
* Origem
* Destino
* Status

**Operações:**

* Inserir pacote
* Buscar pacote
* Remover pacote entregue
* Listar pacotes

## Fluxo da Simulação

1. Os pacotes chegam à rede e entram na fila.
2. Os pacotes são transmitidos seguindo a ordem de chegada.
3. Caso ocorra uma falha, o pacote é enviado para a pilha de retransmissão.
4. Os pacotes ativos permanecem na lista encadeada.
5. Após a entrega, o pacote é removido da lista.

## Tecnologias Utilizadas

* Linguagem C
* Estruturas de Dados:

  * Fila
  * Pilha
  * Lista Encadeada

## Como Compilar

```bash
cd Exercicio5_Redes
gcc *.c -o exercicio5
```

### Windows

```bash
./exercicio5
```

---

## Exemplo de Execução

### Pacotes Recebidos

| Pacote | Tamanho |
| ------ | ------- |
| 1      | 500 KB  |
| 2      | 300 KB  |
| 3      | 700 KB  |
| 4      | 200 KB  |

### Transmissão

* Pacote 1 transmitido
* Pacote 2 transmitido

### Falha

* Pacote 4 enviado para a pilha de retransmissão

### Entrega

* Pacote removido da lista de pacotes ativos

## Perguntas Teóricas

### 1. Por que a fila representa bem a transmissão de pacotes?

 A estrutura de fila é ideal porque opera sob o princípio FIFO (First-In, First-Out), onde o primeiro pacote a chegar à interface de rede é obrigatoriamente o primeiro a ser transmitido. Isso simula com precisão o comportamento real dos buffers de roteadores e switches, garantindo a ordem cronológica do fluxo de dados e mantendo o sequenciamento correto na entrega dos pacotes.
 
### 2. Por que a pilha pode representar retransmissão?

A pilha adota a lógica LIFO (Last-In, First-Out), o que significa que o último pacote a sofrer uma falha de transmissão é posicionado no topo da estrutura. Em cenários de rede, tratar o erro mais recente de forma prioritária permite liberar rapidamente janelas de recepção travadas e interromper gargalos temporários, isolando a falha imediata antes de retomar o fluxo de pacotes mais antigos.

### 3. Por que a lista encadeada ajuda no controle de pacotes ativos?

Diferente de vetores estáticos, a lista encadeada aloca memória dinamicamente por meio de ponteiros, permitindo monitorar pacotes em trânsito cujos ciclos de vida são imprevisíveis. Como os pacotes ativos possuem metadados oscilantes (ID, Origem, Destino e Status), a lista encadeada possibilita inserir novos pacotes em circulação e remover registros de pacotes entregues em qualquer posição da estrutura com custo computacional otimizado, sem a necessidade de deslocar os outros elementos na memória.

### 4. Qual estrutura melhor representa atraso de fila?

A própria estrutura de Fila. O atraso de fila ocorre quando a taxa de chegada de pacotes supera a capacidade de escoamento do enlace de transmissão. A fila modela matematicamente esse atraso, pois o tempo de permanência de um novo pacote na estrutura é diretamente proporcional à soma do tamanho de todos os pacotes que já estavam aguardando atendimento à sua frente.

## Aprendizados

Durante o desenvolvimento deste projeto foi possível compreender como as estruturas de dados podem ser aplicadas em situações reais da área de redes de computadores.

A utilização da fila permitiu organizar os pacotes por ordem de chegada, a pilha foi utilizada para gerenciar retransmissões após falhas e a lista encadeada possibilitou o controle dinâmico dos pacotes ativos na rede.

Além da implementação em linguagem C, o exercício contribuiu para o entendimento da relação entre teoria e prática, demonstrando como diferentes estruturas de dados podem ser escolhidas de acordo com as necessidades de cada problema.
