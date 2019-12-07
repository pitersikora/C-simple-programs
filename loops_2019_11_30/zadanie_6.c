/*
Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy,
a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.
*/

#include <stdio.h>
#include <stdlib.h>

void generate_result(int num_counter, char const *num_array[]);

int main(int argc, char const *argv[])
{
  generate_result(argc, argv);
}

void generate_result(int num_counter, char const *num_array[])
{
  // first number will be max and min at the beggining
  double max = atof(num_array[1]);
  double min = atof(num_array[1]);
  double number;

  for(int i = 2; i < num_counter; i++)
  {
    /*
    every loop checks if number is smaller than min or bigger than max
    if true replace the number
    */
    number = atof(num_array[i]);
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