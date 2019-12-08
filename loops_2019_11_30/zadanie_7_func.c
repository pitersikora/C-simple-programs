#include <stdio.h>
#include <stdlib.h>
#include "zadanie_7_func.h"

void generate_result(int num_counter, char const *num_array[])
{
  int positive_number = 0;
  double number;

  /*
  every loop checks if specific number is bigger than 0
  if true raise ammount of positive numbers by 1
  */
  for(int i = 1; i < num_counter; i++)
  {
    number = atof(num_array[i]);
    if(number > 0)
    {
      positive_number ++;
    }
  }
  printf("Sposrod podanych liczb %d jest dodatnich \n", positive_number);
}