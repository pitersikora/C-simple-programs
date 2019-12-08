#include <stdio.h>
#include <stdlib.h>
#include "zadanie_4_func.h"

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