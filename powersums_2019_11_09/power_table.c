#include <stdio.h>
#include "ansi_color.h"
#include "array_op.h"
#include "array_math.h"
#include "array_size_limit.h"

void create_power_table (int max_base, int max_exponent)
{
  // prepare first line of results table and arrays for calculation
  printf(ANSI_COLOR_RED"\t POWER \t\t\t|\t\t RESULT \t\n");
  printf("---------------------------------------------------------------------------\n"ANSI_COLOR_RESET);
  int result[ARRAY_LIMIT] = {0};
  int power_base[ARRAY_LIMIT] = {0};
  int power_power[ARRAY_LIMIT] = {0};
  int power_step[ARRAY_LIMIT] = {0};

  // one loop = whole sum calculated by power = e
  for(int e = 1; e <= max_exponent; e++)
  {
    // loop for calculating N numbers
    for(int b = 1; b <= max_base; b++)
    {
      // put two numbers into array for multiplication
      op_write_array(power_base, b);
      op_write_array(power_power, b);
      for(int i = 2; i <=e; i++)
      {
        // clear array which keeps last multiplication result and caluclate
        op_clear_array(power_step);
        math_multiply_array(power_base, power_power, power_step);

        // copying array into another to prepare for next multiplication
        for(int c = 0; c <= ARRAY_LIMIT-1; c++)
        {
          power_base[c] = power_step[c];
        }
      }
      // put one N multiplication outcome into final result array
      // if curent power is 1 then power_base is multiplication outcome
      if(e == 1)
      {
        math_sum_array(power_base, result);
      // if sum power is >= 2 then put power_step into final result and multiply further
      } else {
        math_sum_array(power_step, result);
      }
    }
    // print final result after whole calculation
    printf(ANSI_COLOR_YELLOW" 1^%1d + 2^%1d + ... + %1d^%1d \t"ANSI_COLOR_RESET, e, e, max_base, e);
    printf(ANSI_COLOR_RED"| "ANSI_COLOR_RESET);
    op_printf_array(result);
    printf("\n");
    // clear final result for next e loop
    op_clear_array(result);
  }
}