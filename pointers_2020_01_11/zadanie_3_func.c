#include <stdio.h>
#include <stdlib.h>
#include "zadanie_3_func.h"

void wczytaj_liczby(int *table)
{
  // scan 10 number and put it into array
  for(int i = 0; i < 10; i++)
  {
    scanf("%d", &table[i]);
  }
}