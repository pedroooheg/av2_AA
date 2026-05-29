# Job Sequencing Problem

## Paradigma

Algoritmo Guloso

## Descrição

O problema consiste em selecionar e organizar tarefas
de forma que o lucro total obtido seja máximo.

Cada tarefa possui:
- um prazo limite (deadline);
- um valor de lucro;
- duração fixa de uma unidade de tempo.

O objetivo é executar a maior quantidade possível de tarefas
lucrativas sem ultrapassar seus respectivos deadlines.

## Estratégia da Solução

Foi utilizada uma abordagem gulosa (Greedy Algorithm).

Inicialmente, os trabalhos são ordenados em ordem decrescente
de lucro, priorizando as tarefas mais lucrativas.

Para melhorar o desempenho do algoritmo, foi utilizada a
estrutura Disjoint Set Union (DSU), também conhecida como
Union-Find, permitindo encontrar rapidamente horários livres
para alocação das tarefas.

Cada tarefa é inserida no último horário disponível antes
do seu deadline, garantindo melhor aproveitamento do tempo
e maximização do lucro total.

## Complexidade

### Complexidade de Tempo

A complexidade do algoritmo é aproximadamente:

O(n log n)

O custo principal está relacionado à ordenação inicial
dos trabalhos. As operações de busca e união realizadas
pela estrutura DSU possuem custo praticamente constante.

Essa abordagem é significativamente mais eficiente do que
a solução gulosa tradicional O(n²), evitando Time Limit Exceeded
em grandes conjuntos de dados.

### Complexidade de Espaço

A complexidade de espaço é:

O(n)

O algoritmo utiliza estruturas auxiliares para armazenar
os horários disponíveis e o conjunto DSU utilizado
na organização das tarefas.

## Problema Original

O problema utilizado neste trabalho foi obtido na plataforma
GeeksForGeeks.

Link do problema:
https://www.geeksforgeeks.org/job-sequencing-problem/

## Evidência de Execução

A imagem `accepted.png` apresenta a submissão aceita
na plataforma online.