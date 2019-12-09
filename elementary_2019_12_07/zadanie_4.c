/*
Zamiast komentarza  i kropek ... poniżej wpisz kod, tak aby powstał program
zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.
    ```c
    #include <stdio.h>
    int main()
    {
       " deklaracje zmiennych lokalnych "
       nb = 0;  " liczba znaków odstępu "
       nt = 0;  " liczba znaków tabulacji "
       nl = 0;  " liczba znaków nowego wiersza "
       while ((c=getchar()) != EOF) {
          " zliczaj białe znaki "
       }
       printf("liczba znaków odstępu = %d, \
          tabulacji = %d, nowego wiersza = %d\n", ... );
       return 0;
    }
    ```
*/

#include <stdio.h>

int main()
{
  char c;
  int nb = 0;
  int nt = 0;
  int nl = 0;

  while ((c = getchar()) != EOF)
  {
    if(c == '\t') // or c == 9 (from ASCII table)
    {
      nt++;
    }
    else if(c == '\n') // or c == 10 (from ASCII table)
    {
      nl++;
    }
    else if(c == ' ') // or c == 32 (from ASCII table)
    {
      nb++;
    }
  }

  printf("liczba znaków odstępu = %d, \
  tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);

  return 0;
}