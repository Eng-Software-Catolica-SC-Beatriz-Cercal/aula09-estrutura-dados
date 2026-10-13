## Métodos de Busca - Estrutura de Dados

## Resultados

Os quatro métodos foram executados com o mesmo vetor:
 2-3-4-5-6-7-8-9-10-1. E buscaram o valor 5.

Na **pesquisa linear** o valor foi encontrado na posição [3] do vetor original, depois de 4 comparações.

Na **pesquisa binária** o vetor foi ordenado antes da busca e o valor foi encontrado na posição [4] do vetor ordenado, com apenas 1 comparação, pois o primeiro elemento do meio era justamente o valor procurado. 

Na **pesquisa indexada** o valor também foi encontrado na posição [4] do vetor ordenado, mas com 4 comparações.

No **hashing**, a função h(5) = 5 mod 10 levou direto à posição [5] da tabela hash, onde o valor foi encontrado com 1 comparação.

### Melhor desempenho

No contexto vivenciado, o método de Hashing obteve o melhor desempenho, pois realizou apenas 1 comparação. Porém, é importante ressaltar dois pontos importantes: O método de pesquisa binária também resultou em apenas 1 comparação, mas só porque o primeiro elemento do meio era justamente o valor procurado, e o método que utiliza a função hash obteve tal resultado satisfatório pois não houve colisão.

## Adequação dos Métodos de Busca

### Pesquisa linear (sequencial)

A pesquisa linear percorre o vetor um elemento por vez, do início ao fim, e para assim que encontra o valor. Ela é indicada quando se quer um método simples de implementar e de entender, e funciona tanto com vetores ordenados quanto desordenados. Sua limitação é que, em vetores com muitos elementos, pode exigir muitas comparações, principalmente quando o valor está nas últimas posições ou não existe no vetor.

### Pesquisa binária

A pesquisa binária compara o valor procurado com o elemento do meio e continua só na metade em que ele pode estar, repetindo o processo até encontrá-lo ou até acabar o intervalo. Ela é indicada para conjuntos maiores de dados que já estejam ordenados, porque reduz bastante o número de comparações. Sua limitação é exigir que os elementos estejam ordenados antes da busca.

### Pesquisa indexada

A pesquisa indexada usa dados ordenados e um índice auxiliar que aponta para blocos do vetor: primeiro consulta o índice para descobrir o bloco em que o valor pode estar e depois faz uma busca sequencial só dentro dele. É indicada para estruturas maiores, especialmente quando já existe uma organização por blocos e um índice auxiliar. Sua limitação é exigir dados ordenados e a manutenção dessa estrutura de indexação.

### Hashing

O hashing usa uma função matemática, chamada função hash, que transforma a chave de busca em uma posição da tabela, o que permite acessar o elemento de forma praticamente imediata. É indicado para sistemas com grande volume de dados, pela rapidez da busca. Sua limitação é que duas ou mais chaves podem gerar a mesma posição (colisão), o que exige técnicas como a tentativa linear ou listas encadeadas, e que é preciso uma boa função hash para distribuir os elementos de forma equilibrada.

## Acadêmica
<table align="center">
  <tr>
      <a href="https://github.com/BeatrizCercal">
        <img src="https://github.com/BeatrizCercal.png" width="100" style="border-radius:50%" alt="BeatrizCercal"><br>
        <sub><b>BeatrizCercal</b></sub>
      </a>
