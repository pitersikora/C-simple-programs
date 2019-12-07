/*
Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika.
Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.
*/

#include <stdio.h>

void generate_result(int max);

int main()
{
  int max_number = 0;

  printf("podaj liczbe z gornej granicy do sumowania\n");
  scanf("%d", &max_number);

  generate_result(max_number);
}

void generate_result(int max)
{
  if(max < 1)
  {
    printf("nieprawidlowa liczba\n");
    exit(1);
  } else {
    // sum numbers from 1 to max_number
    int result = 0;
    for(int i = 1; i <= max; i++)
    {
      result += i;
    }
    printf("suma kolejnych liczb naturalnych od 1 do %d = %d\n", max, result);
  }
}