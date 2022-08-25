/*
LABORATORIO DE SO - TURMA 04N11

Nomes:
Caio Sampaio Oliveira, TIA:32195621.
Guilherme Picoli Rodrigues, TIA:32147317.
Leonardo Henrique de Oliveira Matos, TIA:32139561.

Exercicio 1 do Lab 01b - 18/08/22
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int numArgs, char *args[]){
  FILE *arquivo;
  char linha[10000];
  char *linhaPtr;
 
  printf("\n > Lendo o arquivo...\n\n");

  arquivo = fopen(args[1], "r");

  if (arquivo == NULL){
    printf("\nErro ao abrir o arquivo de texto, por favor verifique o nome e extensao do arquivo");
    return 0;
  }

  while (!feof(arquivo)){
    linhaPtr = fgets(linha, 10000, arquivo);
    
    if (linhaPtr){
      printf("%s", linha);
    }
  }

  printf("\n\n");
  
  fclose(arquivo);
  
  return 0;
}

