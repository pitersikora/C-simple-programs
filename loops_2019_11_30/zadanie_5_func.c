#include <stdio.h>
#include <stdlib.h>

void generate_result(int counter, char const *numbers[])
{
  for(int i = 1; i < counter; i++)
  {
    printf("liczba %d : %s\n", i, numbers[i]);
  }
}