# Kruskal's Minimum Spanning Tree (MST)

**Paradigma:** Algoritmo Guloso

## Descrição

O problema consiste em encontrar uma árvore geradora mínima (MST) em um grafo ponderado, conectado e não-direcionado, de forma que a soma dos pesos das arestas selecionadas seja mínima.

Cada aresta possui:

- um vértice de origem;
- um vértice de destino;
- um peso (custo).

O objetivo é conectar todos os vértices do grafo utilizando exatamente **V-1 arestas**, sem formar ciclos, minimizando o custo total.

## Estratégia da Solução

Foi utilizada uma abordagem gulosa (Greedy Algorithm).

Inicialmente, todas as arestas são ordenadas em ordem crescente de peso, priorizando as conexões de menor custo.

Para detectar e evitar a formação de ciclos de forma eficiente, foi utilizada a estrutura **Disjoint Set Union (DSU)**, também conhecida como Union-Find, com as otimizações de **path compression** e **union by rank**.

Cada aresta é incluída na MST somente se os dois vértices que ela conecta pertencerem a componentes distintos, garantindo a ausência de ciclos e a construção de uma árvore de custo mínimo.

## Complexidade

### Complexidade de Tempo

A complexidade do algoritmo é aproximadamente:

$$O(E \log E)$$

O custo principal está relacionado à ordenação inicial das arestas. As operações de busca e união realizadas pela estrutura DSU possuem custo praticamente constante com as otimizações aplicadas.

### Complexidade de Espaço

A complexidade de espaço é:

$$O(V)$$

O algoritmo utiliza estruturas auxiliares para armazenar os vetores `parent` e `rank` da estrutura DSU, ambos de tamanho proporcional ao número de vértices.

## Problema Original

O problema utilizado neste trabalho foi obtido na plataforma GeeksForGeeks.

Link do problema: https://www.geeksforgeeks.org/dsa/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/

## Evidência de Execução

A imagem `accepted.png` apresenta a submissão aceita na plataforma online.

![Accepted](accepted.png)
