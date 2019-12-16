/* Korzystając z twierdzenia Euklidesa,
napisać program obliczający rekurencyjnie największy wspólny dzielnik z liczb podanych na wejściu. */

#include <stdio.h>
#include "zadanie_4_func.h"
#include "simpio.h"

int main()
{
  printf("Podaj pierwsza liczbe\n");
  int a = GetInteger();
  printf("Podaj druga liczbe\n");
  int b = GetInteger();

  printf("Najwiekszy wspolny dzielnik liczb %d oraz %d to : %d\n", a, b, calculate_GCF(a, b));
}