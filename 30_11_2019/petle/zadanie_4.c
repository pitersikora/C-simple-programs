#include <stdio.h>

int main()
{
  int max_number = 0;

  printf("podaj liczbe z gornej granicy do sumowania\n");
  scanf("%d", &max_number);

  if(max_number < 1)
  {
    printf("nieprawidłowa liczba\n");
  } else {
    int result = 0;
    for(int i = 1; i <= max_number; i++)
    {
      result += i;
    }
    printf("suma kolejnych liczb naturlanych od 1 do %d = %d\n", max_number, result);
  }
}