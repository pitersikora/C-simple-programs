#include <stdio.h>

int main()
{
  int min_number = 0;
  int max_number = 0;

  printf("podaj liczbe z dolnej granicy\n");
  scanf("%d", &min_number);
  printf("podaj liczbe z gornej granicy\n");
  scanf("%d", &max_number);

  if(min_number > max_number)
  {
    printf("nieprawidłowy zakres liczb\n");
  } else {
    printf("podaje liczby z zakresu miedzy %d a %d\n", min_number, max_number);

    // print numbers between min and max
    while(min_number < max_number-1)
    {
      // first step is incrementation so min number wont be printed
      min_number ++;
      printf("%d\n", min_number);
    }
  }
}