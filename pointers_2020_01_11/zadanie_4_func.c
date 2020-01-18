#include <stdio.h>
#include <stdlib.h>
#include "zadanie_4_func.h"

void wczytaj_liczbe(int *n)
{
  printf("Podaj liczbe elementow w tablicy: ");
  scanf("%d", n);
}

void *stworz_tablice(int n)
{
  /* reserve as much memory as needed for "n" integer numbers
  n is received earlier from user by wczytaj_liczbe*/
  int *temp;
  temp = malloc(n * sizeof(int));

  if(temp == NULL)
  {
    perror("Error in malloc");
    exit(1);
  }
  return temp;
}

void wpisz_liczby(int *tab, int n)
{
  // put numbers from 1 to n into array
  for(int i = 0; i < n; i++)
  {
  tab[i] = i + 1;
  }
}

void wypisz_tablice(int *tab, int limit)
{
  // basic loop for printing all array elements
  for(int i = 0; i < limit; i++)
  {
    printf("%d ", tab[i]);
  }
}