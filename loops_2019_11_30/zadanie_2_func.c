#include <stdio.h>
#include "zadanie_2_func.h"

void print_row_1(int row_ammount, char row_symbol)
{
  for(int i = 0; i < row_ammount; i++)
  {
    printf("%c ", row_symbol);
  }
  printf("\n");
}

void print_row_2(int row_ammount, char row_symbol)
{
  printf(" ");
  for(int i = 0; i < row_ammount; i++)
  {
    printf("%c ", row_symbol);
  }
  printf("\n");
}

void print_layer(int ammount, char symbol)
{
  print_row_1(ammount, symbol);
  print_row_2(ammount, symbol);
}

void print_pattern(int layers)
{
  for (int i = 0; i < layers; i++)
  {
    print_layer(8,'*');
  }
}
