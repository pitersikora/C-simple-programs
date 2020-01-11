/*
Napisz program, ktory pobierze liczbe naturalna n.
Nastepnie stworzy dynamiczna tablice n-element-owa i wypelni ja liczbami
od 1, ... ,n.
Nastepnie program ma wypisac te tablice na ekranie.
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

void wpisz_liczby(int *tab, int n)
{
  for(int i = 0; i < n; i++)
  {
  tab[i] = i+1;
  }
}

void wypisz_tablice(int *tab, int limit)
{
  for(int i = 0; i < limit; i++)
  {
    printf("%d ", tab[i]);
  }
}

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