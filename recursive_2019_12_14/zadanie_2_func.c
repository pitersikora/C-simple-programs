#include <stdio.h>
#include "zadanie_2_func.h"

int calculate_factorial(int number_to_calculate)
{
  if(number_to_calculate <= 1)
  {
    return 1;
  } else {
    return number_to_calculate = number_to_calculate * calculate_factorial(number_to_calculate -1);
  }
}

int generate_result(int set_elements,int subset_elements)
{
  return calculate_factorial(set_elements) /
  (calculate_factorial(subset_elements) * calculate_factorial(set_elements - subset_elements));
}