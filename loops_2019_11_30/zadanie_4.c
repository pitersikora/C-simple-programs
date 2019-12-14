/*
Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika.
Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.
*/
#include <stdio.h>
#include "simpio.h"
#include "zadanie_4_func.h"

int main()
{
  printf("podaj liczbe z gornej granicy do sumowania\n");
  int max_number = GetInteger();

  generate_result(max_number);
}