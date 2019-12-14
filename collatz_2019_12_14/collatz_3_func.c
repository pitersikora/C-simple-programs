#include <stdio.h>
#include "collatz_3_func.h"

void calculate_collatz(long unsigned int limit_number)
{
  int step = 0;
  long unsigned int result;

  for(int i = 1; i <= limit_number; i++)
  {
    result = i;
    step = 0;
    int max = i;

    while(result != 1)
    {
      if(result % 2 == 1)
      {
        result = 3 * result + 1;
        step ++;
        if(result > max)
        {
          max = result;
        }
      } else {
        result = result / 2;
        step ++;
        if(result > max)
        {
          max = result;
        }
      }
    }
    printf("\t%d\t|\tTRUE\t|\t%d\t|\t%d\t\n", i, step, max);
  }
}

void generate_table_header()
{
  printf("\tN\t|\tOK\t|\t#N\t|\tMAX\t\n");
  printf("-----------------------------------------------------------------\n");
}