#include <stdio.h>

void print_pattern();
void print_layer();
void print_row_1();
void print_row_2();

int main()
{
  print_pattern(4);
}

// ----

void print_pattern(int layers) {
  for (int i = 0; i < layers; i++)
  {
    print_layer();
  }
}

void print_row_1()
{
  printf("* * * * * * * *\n");
}

void print_row_2()
{
  printf(" * * * * * * * *\n");
}

void print_layer() {
  print_row_1();
  print_row_2();
}

