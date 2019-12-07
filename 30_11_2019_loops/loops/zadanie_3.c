#include <stdio.h>

void generate_result(int min_number,int max_number);

int main()
{
  int min = 0;
  int max = 0;

  printf("podaj liczbe z dolnej granicy\n");
  scanf("%d", &min);
  printf("podaj liczbe z gornej granicy\n");
  scanf("%d", &max);

  generate_result(min, max);
}

void generate_result(int min_number,int max_number)
{
  if(min_number > max_number)
  {
    printf("nieprawidłowy zakres liczb\n");
  } else {
    printf("podaje liczby z zakresu miedzy %d a %d\n", min_number, max_number);

    // print numbers between min and max (they are excluded)
    while(min_number < max_number-1)
    {
      // first step is incrementation so min number wont be printed
      min_number ++;
      printf("%d\n", min_number);
    }
  }
}