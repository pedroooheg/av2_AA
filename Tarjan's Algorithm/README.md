# Strongly Connected Components (Tarjan's Algorithm)

## Paradigma

---

Grafos

## Descrição

---

O problema consiste em identificar todas as Componentes Fortemente Conectadas (Strongly Connected Components - SCCs) de um grafo direcionado.

Uma Componente Fortemente Conectada é um conjunto máximo de vértices em que existe um caminho entre qualquer par de vértices pertencentes ao mesmo conjunto.

O objetivo é utilizar o algoritmo de Tarjan para encontrar todas as SCCs de forma eficiente, percorrendo o grafo apenas uma vez através de uma busca em profundidade (DFS).

## Estratégia da Solução

---

Foi utilizada uma abordagem baseada em Grafos utilizando o algoritmo de Tarjan.

A ideia principal consiste em realizar uma busca em profundidade (DFS) e manter informações sobre a ordem de descoberta dos vértices e o menor vértice alcançável a partir deles.

Durante a execução são utilizados:

- Um vetor de descoberta (`disc`) para armazenar o instante em que cada vértice foi visitado;
- Um vetor (`low`) para armazenar o menor tempo de descoberta alcançável;
- Uma pilha para armazenar os vértices atualmente pertencentes à componente em construção;
- Um vetor auxiliar para indicar quais vértices estão presentes na pilha.

Quando um vértice possui o mesmo valor em `disc` e `low`, ele é identificado como a raiz de uma Componente Fortemente Conectada.

Nesse momento, todos os vértices pertencentes àquela componente são removidos da pilha e agrupados em uma SCC.

O algoritmo permite encontrar todas as componentes fortemente conectadas em tempo linear em relação ao tamanho do grafo.

## Complexidade

### Complexidade de Tempo

---

A complexidade do algoritmo é:

```text
O(V + E)
```

onde:

- V representa o número de vértices;
- E representa o número de arestas.

Cada vértice é visitado apenas uma vez e cada aresta é analisada uma única vez durante a execução da DFS.
---

---

https://www.geeksforgeeks.org/dsa/tarjan-algorithm-find-strongly-connected-components/

## Evidência de Execução

A imagem `accepted.png` apresenta a submissão aceita na plataforma online.---


**Link do problema:**
O problema utilizado neste trabalho foi obtido na plataforma GeeksForGeeks.



## Problema Original

O consumo de memória é decorrente dos vetores auxiliares utilizados pelo algoritmo e da pilha necessária para armazenar temporariamente os vértices durante a busca.
```

```text
O(V)
A complexidade de espaço é:


