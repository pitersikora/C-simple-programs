#include <stdio.h>
#include "ansi_color.h"
#include "array_op.h"
#include "array_math.h"
#include "power_table.h"

int main()
{
  int N;
  int exponent;

  // ask user for max number to sum and its max exponent
  printf("Enter max base number \n");
  scanf("%d", &N);
  printf("Enter max exponent number \n");
  scanf("%d", &exponent);

  create_power_table (N, exponent);
}