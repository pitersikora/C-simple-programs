/*
Napisz program, ktory bedzie zawieral funkcje MinMax.
Funkcja ta ma przyjmowac tablice liczb calkowitych
(wraz z ich rozmiarem podanym na poczatku programu)
oraz zwracac ma jednoczesnie najmniejszy oraz najwiekszy element tej tablicy.
Funkcja ta ma wywolywac zaimplementowane przez uzytkownika funkcje min i max
odpowiadajace za wyszukiwanie najmniejszego oraz najwiekszego elementu tablicy.

Skorzystaj z wersji wskaznikowej i adresow funkcji.
*/
#include <stdio.h>
#include <stdlib.h>
#include "zadanie_5_func.h"

int main ()
{
  int limit;
  int *tab;
  wczytaj_liczbe(&limit);
  tab = stworz_tablice(limit);
  wczytaj_tablice(tab, limit);
  MinMax(tab, limit);
}