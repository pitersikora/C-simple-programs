/*
Napisz program, ktory bedzie zawieral funkcje MinMax.
Funkcja ta ma przyjmowac tablice liczb calkowitych
(wraz z ich rozmiarem podanym na poczatku programu)
oraz zwracac ma jednoczesnie najmniejszy oraz najwiekszy element tej tablicy.
Funkcja ta ma wywoływac zaimplementowane przez uzytkownika funkcje min i max
odpowiadajace za wyszukiwanie najmniejszego oraz najwiekszego elementu tablicy.

Skorzystaj z wersji wskaznikowej i adresow funkcji.
*/
#include <stdio.h>
#include <stdlib.h>

  void wczytaj_liczbe(int *n)
{
  scanf("%d", n);
}

void *stworz_tablice(int n)
{
  int *temp;
  temp = malloc(n*sizeof(int));

  if(temp == NULL)
  {
    perror("Error in malloc");
    exit(1);
  }
  return temp;
}

void wczytaj_tablice(int *tab, int n)
{
  for(int i=0; i<n; i++)
  {
    scanf("%d", &tab[i]);
  }
}

void MinMax(int *tab, int n)
{
  int min = *tab;
  int max = *tab;

  for(int i = 0; i< n; i++)
  {
    if(tab[i] < min)
    {
      min = tab[i];
    }
    if(tab[i] > min)
    {
      max = tab[i];
    }
  }
  printf("%d %d\n", min, max);
}

int main ()
{
  int limit;
  int *tab;
  wczytaj_liczbe(&limit);
  tab = stworz_tablice(limit);
  wczytaj_tablice(tab, limit);
  MinMax(tab, limit);
}