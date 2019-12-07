#include <stdio.h>

int main()
{
  int M;
  int suma = 0;
  int i = 1;

  printf("Podaj liczbe M: ");
  scanf("%d\n", &M);

  while(suma < M);
  {
    suma=suma+i;
    i=i+1;
  }
  printf("Szukane n to: %d", suma);
  return 0;
}