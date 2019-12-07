/*
Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim.
Użyj pętli for do generowania wzorów.
Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie).
Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.
```bash
*       ****    ****       *
**      ***      ***      **
***     **        **     ***
****    *          *    ****
```
*/
#include "zadanie_8_func.h"

int main()
{
  print_pattern(4,1,1,'*',' ');
  print_pattern(4,4,0,'*',' ');
  print_pattern(4,0,1,' ','*');
  print_pattern(4,3,0,' ','*');
}