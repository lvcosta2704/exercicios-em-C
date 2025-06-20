#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main () {
  int m,n,k, colunaR, linhaR,figurinha=0;
  scanf("%d %d %d", &n, &m, &k);
  char matriz[n][m];
for (int i = 0; i < n; i++){
  for (int j = 0; j < m; j++){
    scanf(" %c", &matriz[i][j]);
    if (matriz[i][j]  =='R'){
      linhaR= i;
      colunaR= j;
      matriz[i][j] = '.';
    }
  }
} 

  char comandos[k+1];
  scanf("%s", comandos);

  for (int i = 0; i < k+1; i++)
  {
    switch (comandos[i])
    {
    case 'N':
    if (linhaR-1>=0)
    {
      switch (matriz[linhaR-1][colunaR])
      {
      case '.':
        linhaR=linhaR-1;
        colunaR=colunaR;
        break;
      case '*':
        figurinha++;
        linhaR=linhaR-1;
        colunaR=colunaR;
        matriz[linhaR][colunaR] = '.';
        break;
      case '#':
        break;
      }
      break;
    }
    case 'S':  
    if (linhaR+1>=0)
    {
      switch (matriz[linhaR+1][colunaR])
      {
      case '.':
        linhaR=linhaR+1;
        colunaR=colunaR;
        break;
      case '*':
        figurinha++;
        linhaR=linhaR+1;
        colunaR=colunaR;
        matriz[linhaR][colunaR] = '.';
        break;
      case '#':
        break;
      }
      break;
    }
    case 'L':
    if (colunaR+1>=0)
    {
      switch (matriz[linhaR][colunaR+1])
      {
      case '.':
        linhaR=linhaR;
        colunaR=colunaR+1;
        break;
      case '*':
        figurinha++;
        linhaR=linhaR;
        colunaR=colunaR+1;
        matriz[linhaR][colunaR] = '.';
        break;
      case '#':
        break;
      }
      break;
    }
    case 'O':
    if (colunaR-1>=0)
    {
      switch (matriz[linhaR][colunaR-1])
      {
      case '.':
        linhaR=linhaR;
        colunaR=colunaR-1;
        break;
      case '*':
        figurinha++;
        linhaR=linhaR;
        colunaR=colunaR-1;
        matriz[linhaR][colunaR] = '.';
        break;
      case '#':
        break;
      }
      break;
    }
    }
  }
  printf("%d\n", figurinha);
}