#include <stdio.h>
#include "zadanie_3_func.h"

void get_text(char *text_array)
{
  int array_element = 0;
  while ((text_array[array_element] = getchar()) != EOF)
  {
    array_element ++;
  }

  text_array[array_element] = 0;
}

void reverse_text(char *text_to_reverse)
{
  if(*text_to_reverse)
  {
    reverse_text(text_to_reverse + 1);
    printf("%c", *text_to_reverse);
  }
}