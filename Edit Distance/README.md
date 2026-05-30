# Edit Distance

**Paradigma:** Programação Dinâmica

## Descrição

O problema consiste em encontrar o número mínimo de operações necessárias para transformar uma string `word1` em uma string `word2`.

As operações permitidas são:

- inserir um caractere;
- deletar um caractere;
- substituir um caractere.

O objetivo é converter `word1` em `word2` utilizando o menor número possível de operações.

## Estratégia da Solução

Foi utilizada uma abordagem de Programação Dinâmica (Dynamic Programming).

Uma tabela `dp[i][j]` é construída, onde cada célula representa o custo mínimo para transformar os primeiros `i` caracteres de `word1` nos primeiros `j` caracteres de `word2`.

Os casos base são definidos como `dp[i][0] = i` (deletar todos os caracteres) e `dp[0][j] = j` (inserir todos os caracteres). Para cada par de caracteres, caso sejam iguais, nenhuma operação é necessária e o valor é herdado diagonalmente. Caso contrário, é escolhido o menor custo entre as três operações possíveis (deleção, inserção e substituição), acrescido de uma unidade.

## Complexidade

### Complexidade de Tempo

A complexidade do algoritmo é:

$$O(m \times n)$$

Onde `m` e `n` são os tamanhos de `word1` e `word2`, respectivamente. Cada célula da tabela é preenchida exatamente uma vez, com custo constante por célula.

### Complexidade de Espaço

A complexidade de espaço é:

$$O(m \times n)$$

O algoritmo utiliza uma tabela bidimensional de tamanho proporcional ao produto dos comprimentos das duas strings.

## Problema Original

O problema utilizado neste trabalho foi obtido na plataforma LeetCode.

Link do problema: https://leetcode.com/problems/edit-distance/

## Evidência de Execução

A imagem `accepted.png` apresenta a submissão aceita na plataforma online.

![Accepted](accepted.png)
