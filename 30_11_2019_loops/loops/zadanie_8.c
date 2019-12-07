#include <stdio.h>
/*
base is how many signs are in one layer and how many layers are in pattern
count is how many sign_1 print at start
print toggle is adding (1) or reducing (0) sign_1 count in next layer
sign_1 is first symbol to print in layer
sign_2 is second symbol to print in layer
*/
void print_pattern(int base, int count, int print_toggle, char sign_1, char sign_2);

int main()
{
  print_pattern(4,1,1,'*',' ');
  print_pattern(4,4,0,'*',' ');
  print_pattern(4,0,1,' ','*');
  print_pattern(4,3,0,' ','*');
}

void print_pattern(int base, int count, int print_toggle, char sign_1, char sign_2)
{
  printf("\n");
  // one loop is one pattern layer, all symbols in layer are equal to base
  for(int c = 0; c < base; c++)
  {
    for(int i = 0; i < count; i ++)
    {
      putchar(sign_1);
    }
    // print sign_2 to fill up layer
    for(int i = 0; i < base - count; i ++)
    {
      putchar(sign_2);
    }
    printf("\n");
    if(print_toggle == 1)
    {
      count ++;
    } else {
      count --;
    }
  }
}