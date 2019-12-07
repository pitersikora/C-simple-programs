#include <stdio.h>
#include <stdlib.h>
/*
pattern_length is how many signs are in one layer and how many layers are in pattern
start_counter is how many sign_1 print at start
change_counter is adding (1) or reducing (0) start_counter for next layer
sign_1 is first symbol to print in layer
sign_2 is second symbol to print in layer
*/
void print_pattern(int pattern_length, int start_counter, int change_counter, char sign_1, char sign_2)
{
  printf("\n");
  // one loop is one pattern layer, all symbols in layer are equal to base
  for(int c = 0; c < pattern_length; c++)
  {
    for(int i = 0; i < start_counter; i ++)
    {
      putchar(sign_1);
    }
    // print sign_2 to fill up layer
    for(int i = 0; i < pattern_length - start_counter; i ++)
    {
      putchar(sign_2);
    }
    printf("\n");
    if(change_counter == 1)
    {
      start_counter ++;
    } else {
      start_counter --;
    }
  }
}