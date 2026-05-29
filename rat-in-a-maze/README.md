# Rat in a Maze

## Paradigma
Backtracking

## Descrição

O problema consiste em encontrar um caminho válido em um labirinto,
partindo da posição inicial até a posição final.

A matriz do labirinto contém células livres e bloqueadas,
e o algoritmo deve determinar um caminho possível entre os pontos.

## Estratégia da Solução

Foi utilizada a técnica de Backtracking, explorando recursivamente
os possíveis caminhos válidos do labirinto.

O algoritmo realiza tentativas de movimentação nas quatro direções
possíveis e marca posições visitadas para evitar ciclos.

Caso um caminho não leve à solução, o algoritmo retorna para
a posição anterior e tenta outra possibilidade.

## Complexidade

### Complexidade de Tempo

A complexidade de tempo do algoritmo é exponencial, podendo chegar a:

O(4^(N²))

Isso ocorre porque, para cada posição do labirinto, o algoritmo pode
explorar até quatro direções possíveis (cima, baixo, esquerda e direita).

No pior caso, o Backtracking tenta diversas combinações de caminhos
até encontrar a solução ou determinar que ela não existe.

Embora nem todos os caminhos sejam explorados em casos práticos,
o crescimento do número de possibilidades torna o algoritmo
custoso para matrizes muito grandes.

### Complexidade de Espaço

A complexidade de espaço é:

O(N²)

Isso ocorre devido ao armazenamento da matriz de visitados
e à pilha de chamadas recursivas utilizada durante a execução
do Backtracking.

## Problema Original

O problema utilizado neste trabalho foi obtido na plataforma
GeeksForGeeks.

Link do problema:
https://www.geeksforgeeks.org/dsa/rat-in-a-maze/

## Evidência de Execução

A imagem `accepted.png` apresenta a submissão aceita
na plataforma online.