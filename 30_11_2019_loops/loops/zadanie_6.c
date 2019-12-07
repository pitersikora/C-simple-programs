#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // first number will be max and min at the beggining
  double max = atof(argv[1]);
  double min = atof(argv[1]);
  double number;

  for(int i = 2; i < argc; i++)
  {
    /* every loop checks if number is smaller than min or bigger than max
    if true replace the number */
    number = atof(argv[i]);
    if(number < min)
    {
      min = number;
    }
    if (number > max)
    {
      max = number;
    }
  }
  printf("Najwieksza liczba sposrod podanych to %lf\nNajmniejsza liczba sposrod podanych to %lf\n", max, min);
}