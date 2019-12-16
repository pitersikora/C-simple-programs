// Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).

#include <stdio.h>
#include "simpio.h"
#include "zadanie_1_func.h"

int main()
{
  printf("Podaj podstawe potegi\n");
  int n = GetInteger();
  printf("Podaj wykladnik potegi\n");
  int k = GetInteger();

  printf("Liczba %d podniesiona do potegi %d to : %ld\n", n, k, generate_result(n, k));
}