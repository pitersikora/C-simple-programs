/*
Uzupełnij podany kod, tak aby powstal dzialajacy program:

void podnies_do_kwadratu(int *n) {

}

void wczytaj_liczbe(int *n) {

}

int main() {
  int liczba;
  wczytaj_liczbe(&liczba);
  podnies_do_kwadratu(&liczba);
  printf("Kwadrat wczytanej liczby to %d\n", liczba);
  return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include "zadanie_1_func.h"

int main()
{
  int liczba;
  wczytaj_liczbe(&liczba);
  podnies_do_kwadratu(&liczba);
  printf("Kwadrat wczytanej liczby to %d\n", liczba);
}