/*
Wzorujac się na powyzszym przykladzie napisz program,
ktory dla 10 elementowej statycznej tablicy wczyta jej elementy
i wypisze na ekranie.

#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;
  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
  printf("%d %d\n", ref[indeks], *wsk);
  return 0;
}
*/
#include <stdio.h>
#include "zadanie_3_func.h"

int main () {
  int ref[10];
  wczytaj_liczby(ref);
  int indeks;
  for (indeks = 0; indeks < 10; indeks++)
  printf("%d ", ref[indeks]);
}