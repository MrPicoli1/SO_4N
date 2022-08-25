# Exercícios LAB 1A:

### Como compilar o programa

### Como executar o programa

### Como comprovar que pos resultados propostos foram alcançados

# Exercícios LAB 1B:

## Exercício 1

### Nome do arquivo

exercicio1-lab1b-04n.c

### Como compilar o programa

Para compilar o programa "exercicio1-lab1b-04n.c" devemos utilizar o compilador C GCC e o seguinte comando no terminal:
gcc exercicio1-lab1b-04n.c -o exercicio1-lab1b-04n.out

### Como executar o programa

Para executar o programa "exercicio1-lab1b-04n.c" devemos utilizar o seguinte comando o terminal:
./exercicio1-lab1b-04n.out test.txt
OBS: o segundo parâmetro refere-se ao caminho para o arquivo que será lido pelo programa.

### Como comprovar que pos resultados propostos foram alcançados

No comando de entrada para rodar o programa utilizamos o segundo argumento para passar o caminho do arquivo ao qual iremos ler.
Para teste criamos um arquivo chamado test.txt com o seguinte conteúdo:
* a
* b
* c
* d e f

Portanto, ao executar o programa deve ser impresso essa saída no terminal.

## Exercício 2 

### Nome do arquivo

exercicio2-lab1b-04n.c

### Como compilar o programa

Para compilar o programa "exercicio2-lab1b-04n.c" devemos utilizar o compilador C GCC e o seguinte comando no terminal:
gcc exercicio2-lab1b-04n.c -o exercicio2-lab1b-04n.out

### Como executar o programa

Para executar o programa "exercicio2-lab1b-04n.c" devemos utilizar o seguinte comando o terminal:
./exercicio2-lab1b-04n.out test.txt test-cp.text
OBS: o segundo parâmetro refere-se ao caminho para o arquivo que será copiado pelo programa, o segundo argumento refere-se ao caminho do arquivo cópia (destino).

### Como comprovar que pos resultados propostos foram alcançados

No comando de entrada para rodar o programa utilizamos o segundo argumento para passar o caminho do arquivo ao qual iremos copiar,
o terceiro argumento para passar o caminho do arquivo destino.
Para teste criamos um arquivo chamado test.txt com o seguinte conteúdo:
* a
* b
* c
* d e f

Portanto, ao executar o programa deve ser copiado esse arquivo e seu respectivo contéudo no caminho e arquivo destino.
