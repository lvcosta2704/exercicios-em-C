#include <stdio.h>
#include "avaliador.h"

int main () {
  char nomearquivo[100];
  scanf("%s", nomearquivo);

  FILE *notas;
  notas = fopen(nomearquivo, "r");
  if (notas == NULL)
  {
    printf("O arquivo notas.csv nao foi aberto");
  }

  FILE *notasatualizadas;
  notasatualizadas = fopen("notas_convertido.csv", "w");
  if (notasatualizadas == NULL)
  {
    printf("O arquivo notas.csv nao foi aberto");
  }
  int c;
  while ((c = fgetc(notas)) != EOF)
  {
    if (c == ',')
    {
      fputc(';', notasatualizadas);
    }
    else if (c == '.') {
      fputc(',', notasatualizadas);
    }
    else  fputc(c, notasatualizadas);
    
  }
  fclose(notas);
  fclose(notasatualizadas);
  

  arquivo_finalizado("notas_convertido.csv");
  
}