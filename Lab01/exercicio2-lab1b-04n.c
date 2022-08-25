/*
LABORATORIO DE SO - TURMA 04N11

Nomes:
Caio Sampaio Oliveira, TIA: 32195621.
Guilherme Picoli Rodrigues, TIA: 32147317.
Leonardo Henrique de Oliveira Matos, TIA: 32139561.

Exercicio 2 do Lab 01b - 18/08/22
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int numArgs, char *args[]){
  FILE *arquivoIn, *arquivoOut;
  char linha[10000];
  char *linhaPtr;

  printf("\n > Lendo o arquivo...\n\n");

  arquivoIn = fopen(args[1], "r");

  if (arquivoIn == NULL){
    printf("\nErro ao copiar o arquivo de texto, por favor verifique o nome e extensao de origem e destino do arquivo!");
    return 0;
  }
  
  arquivoOut = fopen(args[2], "a");

  fclose(arquivoOut);

  arquivoOut = fopen(args[2], "w");

  if (arquivoOut == NULL){
    printf("\nErro ao copiar o arquivo de texto, por favor verifique o nome e extensao de origem e destino do arquivo!");
    return 0;
  }

  while (!feof(arquivoIn)){
    linhaPtr = fgets(linha, 10000, arquivoIn);

   if (linhaPtr){
     fprintf(arquivoOut, "%s", linha);
   }
  }

  fclose(arquivoOut);
  fclose(arquivoIn);

  printf("\n > Arquivo copiado com sucesso!\n\n");

  return 0;
}
