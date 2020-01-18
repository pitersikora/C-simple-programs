#include <stdio.h>
#include <stdlib.h>
#include "zadanie_5_func.h"

void wczytaj_liczbe(int *n)
{
  printf("Podaj rozmiar tablicy: ");
  scanf("%d", n);
}

void *stworz_tablice(int n)
{
  int *temp;
  temp = malloc(n*sizeof(int));

  if(temp == NULL)
  {
    perror("Error in malloc");
    exit(1);
  }
  return temp;
}

void wczytaj_tablice(int *tab, int n)
{
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &tab[i]);
  }
}

void MinMax(int *tab, int n)
{
  int min = *tab;
  int max = *tab;

  for(int i = 0; i< n; i++)
  {
    if(tab[i] < min)
    {
      min = tab[i];
    }
    if(tab[i] > min)
    {
      max = tab[i];
    }
  }
  printf("MIN: %d MAX: %d\n", min, max);
}