#include <stdio.h>
#include "ansi_color.h"
#include "array_op.h"
#include "array_math.h"

int main()
{
  int N;
  int exponent;

  // ask user for max number to sum and its max exponent
  printf("Enter max base number \n");
  scanf("%d", &N);
  printf("Enter max exponent number \n");
  scanf("%d", &exponent);

  // prepare first line of results table and arrays for calculation
  printf(ANSI_COLOR_RED"\t POWER \t\t|\t RESULT \t\n");
  printf("-------------------------------------------------\n"ANSI_COLOR_RESET);
  int result[100] = {0};
  int power_base[100] = {0};
  int power_power[100] = {0};
  int power_step[100] = {0};

  // one loop = whole sum calculated by power = e
  for(int e = 1; e <= exponent; e++)
  {
    // loop for calculating N numbers
    for(int b = 1; b <= N; b++)
    {
      // put two numbers into array for multiplication
      write_array(power_base, b);
      write_array(power_power, b);
      for(int i = 2; i <=e; i++)
      {
        // clear array which keeps last multiplication result and caluclate
        clear_array(power_step);
        multiply_array(power_base, power_power, power_step);

        // copying array into another to prepare for next multiplication
        for(int c = 0; c <= 99; c++)
        {
          power_base[c] = power_step[c];
        }
      }
      // put one N multiplication outcome into final result array
      // if curent power is 1 then power_base is multiplication outcome
      if(e == 1){
        sum_array(power_base, result);
      // if sum power is >= 2 then put power_step into final result and multiply further)
      } else {
        sum_array(power_step, result);
      }
    }
    // print final result after whole calculation
    printf(ANSI_COLOR_YELLOW" 1^%d+2^%d+...+%d^%d \t"ANSI_COLOR_RESET, e, e, N, e);
    printf(ANSI_COLOR_RED"| "ANSI_COLOR_RESET);
    printf_array(result);
    printf("\n");
    // clear final result for next e loop
    clear_array(result);
  }
}