- Verificação

Criamos:
- 1 thread para cada linha
- 1 thread para cada coluna
- 1 thread para cada quadrado,

Sejam finalmente 27 thread. As verifições dão cada vez resultados diferentes (sobre a linha, a coluna e o quadrado), então elas são independantes. Daí a ideia foi implementar threads diferentes, para não haver problemas. 

- Modo dica
Como no programa anterior, foram utilizadas threads. No caso, cada vetor “ja[i]” abriga os 9 valores das linhas, colunas e quadrados. Como as threads são independentes e podem haver conflitos na hora de escrever os valores, o programa imprime as dicas apenas ao final da execução de todas as threads. 

- Completando o diagrama

A ideia do algoritmo foi a seguinte :
Enquanto o sudoku não está completo, o código pega os quadrados cujo numero de escolhas é 1 (por exemplo, quando temos “(8)” ), e atualiza as linhas, colunas e quadrado (seja, tira todos os 8 da linha, coluna e quadrado correspondentes). Dai, o numero de escolhas nos outros quadrinho fica decrescente, pois precisamos notar que o algoritmo só funciona em um sudoku “simples”, ou seja, em um sudoku onde não se precisa fazer suposições a qualquer momento para resolvê-lo.
Daí, criamos para cada quadrado, quando eles têm só uma escolha, 3 threads::
-1 para atualizar a linha correspondente
-1 para atualizar a coluna correspondente
-1 para atualizar o quadrado correspondente
Há muitas threads sendo executadas ao mesmo tempo. Precisamos notar que, para um quadrado com uma escolha:
- a atualização da linha e da coluna são independentes
- mas a atualizaçao do quadrado pode mudar com a atualização da linha/coluna. Por exemplo, em um quadrado, temos:
(48) A B
(8)  C D
E    F G
Resolvendo o (8), o quadrado com (48) vai ser modificado pela coluna e também pelo quadrado. Não podemos deixar rodar a thread do quadrado ao mesmo tempo que a thread da linha ou da coluna.

