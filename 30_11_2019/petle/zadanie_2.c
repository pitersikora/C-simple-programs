#include <stdio.h>

void print_row_1 ()
{
  printf("* * * * * * * *\n");
}

void print_row_2 ()
{
  printf(" * * * * * * * *\n");
}

int main()
{
  int rows = 4;

  for (int i = 1; i < rows; i++)
  {
    print_row_1();
    print_row_2();
  }

  print_row_1();
}