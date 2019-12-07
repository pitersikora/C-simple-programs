#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int counter = 0;
  double number;

  /* every loop checks if specific number is bigger than 0
  if true raise counter by 1 */
  for(int i = 1; i < argc; i++)
  {
    number = atof(argv[i]);
    if(number > 0)
    {
      counter ++;
    }
  }
  printf("Sposrod podanych liczb %d jest dodatnich \n", counter);
}