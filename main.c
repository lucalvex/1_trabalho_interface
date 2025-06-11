#include <stdio.h>
#include "pocketpy.h"
#include "levenshtein.h"

FILE *file;

int main(int argc, char *argv[]) {

  int tamLinha;
  int tam = 0;
  char linha[50];
  char name1[50];
  char name2[50];
  char *script;

  if (argc < 2) {
    printf("Uso %s <scrpit.py>\n", argv[0]);
    return 0;
  }

  script = argv[1];
  file = fopen(script, "r");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo: %s\n", script);
  } 

  fseek(file, 0, SEEK_END);
  tam = ftell(file);
  fseek(file, 0, SEEK_SET);
  printf("Arquivo %s aberto com sucesso!\n", script);
  
  fgets(linha, sizeof(linha), file);

  while (linha != NULL) {
    tamLinha = strlen(linha);
    strncpy(name1, linha + 2, tamLinha - 2);
    name1[tamLinha - 2] = '\0';  // termina string

    fgets(linha, sizeof(linha), file);

    tamLinha = strlen(linha);
    strncpy(name2, linha + 2, tamLinha - 2);
    name2[tamLinha - 2] = '\0';  // termina string

    int resultado = levenshtein(name1, name2);

    printf("%d", resultado);

  }

  fclose(file);
  return 0;
}
