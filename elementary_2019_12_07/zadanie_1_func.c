#include <stdio.h>
#include "zadanie_1_func.h"

void generate_result(int iterator, int sum, int number)
{
    while(sum < number)
  {
      // check if next sum exceeds user input
      if(sum + iterator >= number)
      {
        break;
      } else {
      sum = sum + iterator;
      iterator = iterator + 1;
      }
  }

  printf("Szukane n to: %d\nponiewaz:\n", iterator);

  // loop for printing result explanation
  for(int i = 1; i <= iterator; i++)
  {
    printf("%d ", i);
    if(i < iterator)
    {
      printf("+ ");
    }
  }

  printf(">= %d\n", number);
}