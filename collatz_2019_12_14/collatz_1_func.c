#include <stdio.h>
#include "collatz_1_func.h"

void calculate_collatz(long unsigned int limit_number)
{
  int step = 0;
  int result;

  for(int i = 1; i <= limit_number; i++)
  {
  /* collatz algoryth is a mathematical problem where:
  1. if number is even, divide it by 2
  2. if number is odd, multiply it by 3 and add 1
  3. if result is 1, problem is finished
  from every starting number you can get to final result which is 1
  function is calculating this algoryth and counts each step taken
  after calculation it prints into generated table:
  1. number calculated
  2. result of algorythm
  */
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