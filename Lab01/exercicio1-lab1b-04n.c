/*
LABORATORIO DE SO - TURMA 04N11

Nomes:
Caio Sampaio Oliveira, TIA: 32195621.
Guilherme Picoli Rodrigues, TIA: 32147317.
Leonardo Henrique de Oliveira Matos, TIA: 32139561.

Exercicio 1 do Lab 01b - 18/08/22
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  FILE *arquivo;
  char linha[10000], endereco[1000];
  char *linhaPtr;

  printf("Digite o caminho do arquivo de texto: ");
  scanf("%s", endereco);
 
  printf("\n > Lendo o arquivo...\n\n");

  arquivo = fopen(endereco, "r");

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
  
  fclose(arquivo);
  
  return 0;
}

