#include <stdio.h>

void print_pattern(int layers);
void print_layer(int ammount, char sign);
void print_row_1(int symbol_ammount, char symbol);
void print_row_2(int symbol_ammount, char symbol);

int main()
{
  print_pattern(4);
}

// ----

void print_pattern(int layers)
{
  for (int i = 0; i < layers; i++)
  {
    print_layer(8,'*');
  }
}

void print_row_1(int symbol_ammount, char symbol)
{
  for(int i = 0; i < symbol_ammount; i++)
  {
    printf("%c ", symbol);
  }
  printf("\n");
}

void print_row_2(int symbol_ammount, char symbol)
{
  printf(" ");
  for(int i = 0; i < symbol_ammount; i++)
  {
    printf("%c ", symbol);
  }
  printf("\n");
}

void print_layer(int ammount, char sign)
{
  print_row_1(ammount, sign);
  print_row_2(ammount, sign);
}