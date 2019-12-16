#include <stdio.h>
#include "zadanie_4_func.h"

int calculate_GCF(int first_number, int second_number)
{
  if(first_number % second_number == 0)
  {
    return second_number;
  } else {
    return calculate_GCF(second_number, first_number % second_number);
  }
}