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

int main(){
  FILE *arquivoIn, *arquivoOut;
  char linha[10000], enderecoIn[1000], enderecoOut[1000];
  char *linhaPtr;

  printf("Digite o caminho de origem do arquivo de texto: ");
  scanf("%s", enderecoIn);

  printf("\nDigite o caminho de destino do arquvio de texto: ");
  scanf("%s", enderecoOut);

  printf("\n > Lendo o arquivo...\n\n");

  arquivoIn = fopen(enderecoIn, "r");

  if (arquivoIn == NULL){
    printf("\nErro ao copiar o arquivo de texto, por favor verifique o nome e extensao de origem e destino do arquivo!");
    return 0;
  }
  
  arquivoOut = fopen(enderecoOut, "a");

  fclose(arquivoOut);

  arquivoOut = fopen(enderecoOut, "w");

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
