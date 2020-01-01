#include <stdio.h>
#include "zadanie_2_func.h"

int calculate_factorial(int number_to_calculate)
{
  /* function for calculating factorial recursively:
  multiply base number with base number reduced by 1, put the result into next execution of
  function, repeat till number is reduced to 1 or 0 */
  if(number_to_calculate <= 1)
  {
    return 1;
  } else {
    return number_to_calculate = number_to_calculate * calculate_factorial(number_to_calculate -1);
  }
}

int generate_result(int set_elements,int subset_elements)
{
  // function for calculating newton symbol n! / (k! * (n-k)!)
  return calculate_factorial(set_elements) /
  (calculate_factorial(subset_elements) * calculate_factorial(set_elements - subset_elements));
}