#include <stdio.h>
#include "collatz_1_func.h"

void calculate_collatz(long unsigned int limit_number)
{
  int step = 0;
  int result;

  for(int i = 1; i <= limit_number; i++)
  {
    result = i;
    step = 0;

    while(result != 1)
    {
      if(result % 2 == 1)
      {
        result = 3 * result + 1;
        step ++;
      } else {
        result = result / 2;
        step ++;
      }
    }
    printf("\t%d\t|\tTRUE\t\n", i);
  }
}

void generate_table_header()
{
  printf("\tN\t|\tOK\t\n");
  printf("---------------------------------\n");
}