# Karatsuba Algorithm for Fast Multiplication

## Paradigma

---

Divisão e Conquista

## Descrição

---

O problema consiste em calcular o produto entre dois números inteiros representados por strings binárias.

Uma abordagem ingênua realiza a multiplicação bit a bit, semelhante ao método ensinado na escola, resultando em complexidade quadrática.

O objetivo é utilizar o algoritmo de Karatsuba para reduzir a quantidade de multiplicações necessárias e obter uma solução mais eficiente.

## Estratégia da Solução

---

Foi utilizada a técnica de Divisão e Conquista através do algoritmo de Karatsuba.

A ideia principal consiste em dividir recursivamente cada número binário em duas metades. Em vez de realizar quatro multiplicações recursivas, como ocorreria em uma divisão convencional, o algoritmo utiliza apenas três multiplicações:

- Multiplicação das partes mais significativas;
- Multiplicação das partes menos significativas;
- Multiplicação da soma das partes.

A partir desses três resultados, o produto final é reconstruído utilizando deslocamentos binários e operações aritméticas.

Essa redução no número de multiplicações torna o algoritmo significativamente mais eficiente para números grandes quando comparado ao método tradicional.

## Complexidade

### Complexidade de Tempo

---

A complexidade do algoritmo é:

```text
O(n^log₂3)
```

ou aproximadamente:

```text
O(n^1.585)
```

Essa complexidade é obtida pela redução do número de multiplicações recursivas de quatro para três em cada divisão do problema.

### Complexidade de Espaço

---

A complexidade de espaço é:

```text
O(log n)


## Problema Original
---

**Link do problema:**
https://www.geeksforgeeks.org/dsa/karatsuba-algorithm-for-fast-multiplication-using-divide-and-conquer-algorithm/


---
A imagem `accepted.png` apresenta a submissão aceita na plataforma online.
## Evidência de Execução


O problema utilizado neste trabalho foi obtido na plataforma GeeksForGeeks.

O consumo de memória é decorrente principalmente da pilha de chamadas recursivas utilizada durante a execução do algoritmo.

