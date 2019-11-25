#include <stdio.h>
#include "array_op.h"

// function for summing two numbers in form of arrays
void math_sum_array(int component[], int sum[])
{
  for(int i = 0; i < 100; i++)
  {
    {
      sum[i] = sum[i] + component[i];
      if(sum[i] >= 10)
      {
        // if sum >= 10 write modulo into i element and add 1 into i+1 element
        sum[i] = sum[i] % 10;
        sum[i+1] += 1;
      }
    }
  }
}

// function for multiplying two numbers in form of arrays
void math_multiply_array(int multiplicant[], int multiplier[], int final_array[])
{
  // prepare array and variable for temporary results
  int prepare_array[100] = {0};
  int multiply_res = 0;

  for(int i = 0; i < 100; i++)
  {
    // if i element in multiplicant is 0 then skip this calculation
    // and go to next element
    if(multiplicant[i] != 0)
    {
      for(int j = 0; j < 100; j++)
      {
        // same as for multiplicant
        if(multiplier[j] != 0)
        {
          multiply_res = multiplicant[i] * multiplier[j];
        } else {
        // don't leave the loop until all elements are calculated
          continue;
        }
        // put ones of result into i+j element and tenths into i+j+1 element
        prepare_array[j+i] = multiply_res % 10;
        prepare_array[j+i+1] = multiply_res / 10;
        // put multiplication of two elements into final result array
        math_sum_array(prepare_array, final_array);
        op_clear_array(prepare_array);
      }
    }
  }
}