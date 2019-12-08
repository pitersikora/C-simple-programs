#include <stdio.h>
#include <math.h>
#include "ansi_color.h"
#include "array_size_limit.h"

// function for converting number into array
void op_write_array(int what_array[], int num_to_write)
{
  int digit_number = 0;
  int num_to_count = num_to_write;

  // loop for counting digits in a number
  while(num_to_count != 0)
  {
    // divide number by 10 as long as it has digits
    num_to_count /= 10;
    ++digit_number;
  }

  // loop for writing number into array
  for(int i = digit_number - 1; i >= 0; i--)
  {
    // take last digit from number and put it into array
    int divider = pow(10, i);
    what_array[i] = num_to_write / divider;
    // rest of the number is divided again in next iteration
    num_to_write = num_to_write % divider;
  }
  // fill rest of array with zeros
  for(int i = digit_number; i <= ARRAY_LIMIT-1; i++)
  {
    what_array[i] = 0;
  }
}

// function for printing number from array
void op_printf_array(int array_to_print[])
{
  // guard variable
  int empty = 1;

  for(int i = ARRAY_LIMIT-1; i >= 0; i--)
  {
    // condition protecting from printing empty array elements
    if(array_to_print[i] != 0 && empty == 1)
    {
      empty = 0;
    }
    // if first digit is found then print everything till the end
    if(empty == 0)
    {
      // loop for printing '_' sign every 3 digits
      if ((i % 3 == 0) && (i!=0))
      {
        printf(ANSI_COLOR_GREEN"%d_"ANSI_COLOR_RESET, array_to_print[i]);
      } else {
        printf(ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, array_to_print[i]);
      }
    }
  }
}

// function for filling array with zeros
void op_clear_array(int array_to_clear[])
{
  for(int i = 0; i < ARRAY_LIMIT; i++)
  {
    array_to_clear[i] = 0;
  }
}