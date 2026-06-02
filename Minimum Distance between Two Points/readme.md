# Problema 1: Menor Distância Entre Dois Pontos (Minimum Distance Between Two Points)

## Informações Gerais
* **Link para o problema original:** [GeeksforGeeks - Minimum Distance Between Two Points](https://www.geeksforgeeks.org/problems/minimum-distance-between-two-points/1)
* **Técnica Algorítmica Utilizada:** Divisão e Conquista (Divide and Conquer)

---

## Descrição do Problema
O problema consiste em encontrar a menor distância euclidiana entre dois pontos distintos em um plano bidimensional. Cada ponto é fornecido com suas coordenadas $(x, y)$, e a distância entre dois pontos $A(x_1, y_1)$ e $B(x_2, y_2)$ é calculada pela fórmula clássica da geometria analítica:

$$d = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2}$$

O objetivo principal é determinar o menor valor absoluto dessa distância considerando todos os pares de pontos possíveis no conjunto de entrada.

---

## Explicação da Solução
Para resolver o problema de forma eficiente, aplicamos o paradigma de **Divisão e Conquista**. A estratégia funciona seguindo os passos abaixo:

1. **Ordenação Inicial:** Ordenamos todos os pontos com base na coordenada $X$. Se dois pontos possuírem a mesma coordenada $X$, eles são ordenados pela coordenada $Y$. Essa ordenação serve para facilitar a divisão geométrica do plano.
2. **Divisão e Recursão:** Dividimos o conjunto de pontos ao meio usando uma linha vertical imaginária (ponto médio). Recursivamente, calculamos a menor distância na metade esquerda ($d_L$) e na metade direita ($d_R$). Definimos a menor distância encontrada até o momento como $d = \min(d_L, d_R)$.
3. **Combinação (A Faixa Central):** É possível que os dois pontos mais próximos do plano estejam separados pela linha de divisão (um do lado esquerdo e outro do lado direito). Para verificar isso, filtramos todos os pontos cuja distância horizontal até a linha média seja menor que $d$. 
4. **Otimização da Faixa:** Ordenamos esses pontos filtrados pela coordenada $Y$. Para cada ponto nesta faixa, basta compará-lo com os pontos subsequentes cujo delta $Y$ seja menor que $d$. Geometricamente, prova-se que não é necessário checar mais do que 7 vizinhos para cada ponto nessa região, mantendo essa etapa linear.

Esta abordagem evita a comparação de todos os pares de pontos, o que seria inviável para grandes volumes de dados.

---

## Análise de Complexidade

### Complexidade de Tempo
* **Ordenação Inicial:** A ordenação prévia do vetor de pontos consome $O(n \log n)$.
* **Etapa Recursiva e Combinação:** A divisão divide o problema em $2T(n/2)$. Na etapa de combinação, o algoritmo realiza uma filtragem linear $O(n)$, mas executa um `sort` interno na região da faixa central que custa $O(n \log n)$.
* **Recorrência do Algoritmo:** $$T(n) = 2T(n/2) + O(n \log n)$$
* **Complexidade Total:** Pelo Teorema Mestre, a complexidade final da solução é **$O(n \log^2 n)$**. É uma melhoria drástica comparada à abordagem de força bruta, que exigiria **$O(n^2)$** comparações.

### Complexidade de Espaço
* **Complexidade Total:** **$O(n)$**. O algoritmo utiliza vetores auxiliares (`faixa`) para processar os pontos que estão próximos à linha divisória em cada nível da recursão, além da pilha de chamadas do sistema.

---

## Evidência de Execução Correta
A imagem abaixo comprova a submissão e aceitação do código na plataforma de juiz online:

![Evidência de Aceitação](./accepted.png)