/*
Napisz program, ktory bedzie zawieral funkcje swap_integers,
ktory bedzie zamienial miejscami liczby a i b.
*/
#include <stdio.h>
#include <stdlib.h>
#include "zadanie_2_func.h"

int main(int argc, char **argv)
{
  int a, b;
  printf("Podaj dwie liczby do zamienienia miejscami: ");
  wczytaj_liczbe(&a);
  wczytaj_liczbe(&b);
  swap_integers(&a, &b);
  printf("%d %d\n", a, b);
}