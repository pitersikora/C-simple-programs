/* Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k,
czyli liczbę podzbiorów k-elementowych zbioru n-elementowego. */

#include <stdio.h>
#include "simpio.h"
#include "zadanie_2_func.h"

int main()
{
  printf("Podaj wielkość zbioru\n");
  int n = GetInteger();
  printf("Podaj liczbe elementow w podzbiorach\n");
  int k = GetInteger();

  printf("Liczba podzbiorow %d elementowych z zbioru %d elementowego to : %d\n", k, n, generate_result(n, k));
}