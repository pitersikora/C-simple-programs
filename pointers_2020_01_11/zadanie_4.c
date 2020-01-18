/*
Napisz program, ktory pobierze liczbe naturalna n.
Nastepnie stworzy dynamiczna tablice n-element-owa i wypelni ja liczbami
od 1, ... ,n.
Nastepnie program ma wypisac te tablice na ekranie.
*/
#include <stdio.h>
#include <stdlib.h>
#include "zadanie_4_func.h"

int main ()
{
  int n;
  int *tab;
  wczytaj_liczbe(&n);
  tab = stworz_tablice(n);
  wpisz_liczby(tab, n);
  wypisz_tablice(tab, n);
  free(tab);
}