# Matrix Chain Multiplication

## Paradigma

Programação Dinâmica

## Descrição

O problema consiste em determinar a melhor forma de realizar
a multiplicação de uma sequência de matrizes.

Embora o resultado final da multiplicação seja o mesmo,
a ordem em que as multiplicações são realizadas pode alterar
significativamente a quantidade de operações necessárias.

O objetivo é encontrar a parentização que minimize
o custo total de multiplicações escalares.

## Estratégia da Solução

Foi utilizada a técnica de Programação Dinâmica com memoização.

O algoritmo divide o problema principal em diversos
subproblemas menores, calculando o custo mínimo para
multiplicar subconjuntos das matrizes.

Os resultados intermediários são armazenados em uma
tabela DP (Dynamic Programming), evitando cálculos repetidos
e reduzindo significativamente o custo computacional.

A solução testa todas as possíveis posições de divisão
da cadeia de matrizes e escolhe aquela que produz
o menor custo total.

## Complexidade

### Complexidade de Tempo

A complexidade do algoritmo é:

O(n³)

Isso ocorre porque o algoritmo analisa todos os possíveis
intervalos de matrizes e todas as possíveis divisões
entre esses intervalos.

Apesar do elevado custo cúbico, a Programação Dinâmica
reduz drasticamente o número de cálculos em comparação
com a solução recursiva pura.

### Complexidade de Espaço

A complexidade de espaço é:

O(n²)

O algoritmo utiliza uma matriz DP para armazenar
os custos mínimos calculados para cada subproblema.

## Problema Original

O problema utilizado neste trabalho foi obtido na plataforma
GeeksForGeeks.

Link do problema:
https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/

## Evidência de Execução

A imagem `accepted.png` apresenta a submissão aceita
na plataforma online.