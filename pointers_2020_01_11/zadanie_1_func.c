#include <stdio.h>
#include <stdlib.h>
#include "zadanie_1_func.h"

void wczytaj_liczbe(int *n)
{
  printf("Podaj liczbe ktora podniose do kwadratu: ");
  scanf("%d", n);
}

void podnies_do_kwadratu(int *n)
{
  // simple operation for multiplying number by itself
  *n *= *n;
}