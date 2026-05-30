# Minimum Distance Between Two Points

## Paradigma
Divisão e Conquista

## Descrição
O problema consiste em encontrar a menor distância euclidiana entre dois pontos distintos em um plano bidimensional.

Cada ponto é representado por suas coordenadas (x, y), e a distância entre dois pontos é calculada pela fórmula:

d = √((x₁ - x₂)² + (y₁ - y₂)²)

O objetivo é determinar o menor valor dessa distância entre todos os pares de pontos fornecidos.

## Estratégia da Solução

Foi utilizada a técnica de Divisão e Conquista (Divide and Conquer).

Inicialmente, os pontos são ordenados pela coordenada X. Em seguida, o conjunto é dividido recursivamente em duas metades.

Para cada metade é calculada a menor distância local. Após isso, é realizada uma etapa de combinação, onde são analisados os pontos próximos à linha divisória para verificar se existe um par de pontos pertencentes a lados diferentes cuja distância seja menor que as encontradas anteriormente.

Essa abordagem reduz significativamente a quantidade de comparações necessárias quando comparada à solução de força bruta.

## Complexidade

### Tempo

A ordenação inicial dos pontos possui custo O(n log n).

A estratégia de divisão e conquista resolve recursivamente dois subproblemas de tamanho n/2 e realiza uma etapa de combinação eficiente.

A recorrência do algoritmo é:

T(n) = 2T(n/2) + O(n log n)

Resultando em complexidade aproximada de:

O(n log² n)

Enquanto a abordagem ingênua exigiria comparar todos os pares de pontos, resultando em:

O(n²)

### Espaço

O algoritmo utiliza estruturas auxiliares para armazenar subconjuntos de pontos durante as chamadas recursivas.

Complexidade de espaço:

O(n)

## Problema Original

O problema utilizado neste trabalho foi obtido na plataforma GeeksForGeeks.

Link do problema:

https://www.geeksforgeeks.org/dsa/closest-pair-of-points-using-divide-and-conquer-algorithm/