#include <stdio.h>
#include <stdlib.h>
#include "zadanie_1_func.h"

void podnies_do_kwadratu(int *n)
{
  *n *= *n;
}

void wczytaj_liczbe(int *n)
{
  printf("Podaj liczbe ktora podniose do kwadratu: ");
  scanf("%d", n);
}