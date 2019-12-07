#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int multiplier = atoi(argv[1]);
  int multiplicator = atoi(argv[2]);
  int result = 0;
  /*
  while multiplier isnt 0 divide it by 2 and double multiplicator
  after calculation if multiplier isnt even number add multiplicator to result
  */
  while(multiplier != 0)
  {
    // first loop checks multiplier without dividing
    if(multiplier % 2 != 0)
    {
      result += multiplicator;
    }
    multiplier /= 2;
    multiplicator *= 2;
  }
  printf("wynik mnozenia podanych liczb wynosi = %d\n", result);
}