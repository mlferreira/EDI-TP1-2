# Labirinto Recursivo

Trabalho prático de Estrutura de Dados I.


## Definição do Problema

Seja um labirinto descrito através de uma matriz, onde cada posição com valor igual a 1 corresponde a uma passagem livre, e uma posição 0 representa uma obstrução. 

A partir da entrada definida, seu programa deve encontrar de forma recursiva um caminho que leve de uma posição inicial qualquer a uma saída do labirinto, caso exista. 
Uma saída é uma posição livre na borda da matriz que define o labirinto.


### Entrada

A primeira linha corresponde à ordem da matriz ( `L C` ). 
Em seguida, deve ser fornecido o preenchimento de suas posições (0 para obstrução, 1 para livre).
E, por fim, a posição inicial  ( `x y` ). 

Há um exemplo de entrada no arquivo `test/entrada.txt`.


## Instalação e Execução


### Linux

```
make all
```

```
make run
```
ou (para rodar o exemplo)
```
make teste
```

### Windows

```
g++ -o tp1ex2 src/main.cpp 
```

```
tp1ex2
```
ou (para rodar o exemplo)
```
tp1ex2 < test/entrada.txt
```