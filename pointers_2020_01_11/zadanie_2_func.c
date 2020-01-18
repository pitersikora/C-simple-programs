#include <stdio.h>
#include <stdlib.h>
#include "zadanie_2_func.h"

void wczytaj_liczbe(int *n)
{
  scanf("%d", n);
}

void swap_integers(int *a, int *b)
{
  /* replace values between a and b
  temp variable is used to store "a" value
  so it wont be lost after replacing it by "b"*/
  int temp = *a;
  *a = *b;
  *b = temp;
}