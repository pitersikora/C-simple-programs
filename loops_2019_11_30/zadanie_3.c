/*
Napisz program, który wczyta dwie liczby całkowite a i b (a<b)
a następnie wypisze wszystkie liczby całkowite pomiędzy a i b
*/
#include <stdio.h>
#include "zadanie_3_func.h"

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