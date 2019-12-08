#include <stdio.h>
#include <stdlib.h>
#include "zadanie_3_func.h"

void generate_result(int min_number,int max_number)
{
  if(min_number > max_number)
  {
    printf("nieprawidłowy zakres liczb\n");
    exit(1);
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