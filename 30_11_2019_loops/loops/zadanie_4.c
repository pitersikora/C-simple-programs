#include <stdio.h>

int main()
{
  int max_number = 0;

  printf("podaj liczbe z gornej granicy do sumowania\n");
  scanf("%d", &max_number);

  if(max_number < 1)
  {
    printf("nieprawidlowa liczba\n");
  } else {
    // sum numbers from 1 to max_number
    int result = 0;
    for(int i = 1; i <= max_number; i++)
    {
      result += i;
    }
    printf("suma kolejnych liczb naturalnych od 1 do %d = %d\n", max_number, result);
  }
}