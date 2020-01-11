/*
Napisz program, ktory bedzie zawieral funkcje swap_integers,
ktory bedzie zamienial miejscami liczby a i b.
*/
#include <stdio.h>
#include <stdlib.h>

void wczytaj_liczbe(int *n)
{
  scanf("%d", n);
}

void swap_integers(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(int argc, char **argv)
{
  int a, b;
  wczytaj_liczbe(&a);
  wczytaj_liczbe(&b);
  swap_integers(&a, &b);
  printf("%d %d\n", a, b);
}