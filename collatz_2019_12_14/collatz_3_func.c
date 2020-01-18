#include <stdio.h>
#include "collatz_3_func.h"

void calculate_collatz(long unsigned int limit_number)
{
  int step = 0;
  long unsigned int result;

  for(int i = 1; i <= limit_number; i++)
  {
    /* collatz algorithm is a mathematical problem where:
  1. if number is even, divide it by 2
  2. if number is odd, multiply it by 3 and add 1
  3. if result is 1, problem is finished
  from every starting number you can get to final result which is 1
  function is calculating this algoryth and counts each step taken
  additionaly function checks for maximum number in calculations
  after calculation it prints into generated table:
  1. number calculated
  2. result of algorythm
  3. steps taken to complete the algorythm
  4. biggest number which occured during calculations*/
    result = i;
    step = 0;
    int max = i;

    while(result != 1)
    {
      if(result % 2 == 1)
      {
        result = 3 * result + 1;
      } else {
        result = result / 2;
      }
      step ++;
      if(result > max)
      {
        max = result;
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