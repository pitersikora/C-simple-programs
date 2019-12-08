#include <stdio.h>
#include <stdlib.h>
#include "zadanie_5_func.h"

void generate_result(int counter, char const *numbers[])
{
  for(int i = 1; i < counter; i++)
  {
    printf("liczba %d : %s\n", i, numbers[i]);
  }
}