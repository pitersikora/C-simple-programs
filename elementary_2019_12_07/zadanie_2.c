/*
Zamiast komentarzy "..."  w programie poniżej wpisz kod tak, aby powstał program,
który sprawdza czy podana liczba całkowita jest pierwsza.
    ```c
    #include <stdio.h>
    int main() {
      " deklaracje zmiennych "
      printf("Podaj liczbe calkowita: ");
      " wczytaj tę liczbę do zmiennej n "
      " sprawdź czy n jest liczbą pierwszą "
      printf("Podana liczba '%d' jest %s\n",
        n, jest_pierwsza ? "pierwsza" : "złożona");
      return 0;
    }
    ```
*/
#include <stdio.h>
#include "zadanie_2_func.h"

int main()
{
  int n = 0;

  printf("Podaj liczbe calkowita: ");
  scanf("%d", &n);

  printf("\nPodana liczba '%d' jest %s\n",
  n, jest_pierwsza(n) ? "pierwsza" : "złożona");

  return 0;
}