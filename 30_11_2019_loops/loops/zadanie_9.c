#include <stdio.h>
#include <stdlib.h>

void generate_result(int number_1, int number_2);

int main(int argc, char const *argv[])
{
  int multiplier = atoi(argv[1]);
  int multiplicator = atoi(argv[2]);

  generate_result(multiplier, multiplicator);
}

void generate_result(int number_1, int number_2)
{
  int result = 0;
  /*
  while multiplier isnt 0 divide it by 2 and double multiplicator
  after calculation if multiplier isnt even number add multiplicator to result
  */
  while(number_1 != 0)
  {
    // first loop checks multiplier without dividing
    if(number_1 % 2 != 0)
    {
      result += number_2;
    }
    number_1 /= 2;
    number_2 *= 2;
  }
  printf("wynik mnozenia podanych liczb wynosi = %d\n", result);
}