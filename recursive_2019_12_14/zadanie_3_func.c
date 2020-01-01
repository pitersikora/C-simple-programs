#include <stdio.h>
#include "zadanie_3_func.h"

void get_text(char *text_array)
{
  // function for putting stdin into array of characters, last character after incrementation is NULL
  int array_element = 0;
  while ((text_array[array_element] = getchar()) != EOF)
  {
    array_element ++;
  }

  text_array[array_element] = 0;
}

void reverse_text(char *text_to_reverse)
{
  /* recursive function for printing characters in inverted order:
  till there are characters in array, execute function reverse_text but with next character,
  when array element is NULL all printf functions will begin to execute*/
  if(*text_to_reverse)
  {
    reverse_text(text_to_reverse + 1);
    printf("%c", *text_to_reverse);
  }
}