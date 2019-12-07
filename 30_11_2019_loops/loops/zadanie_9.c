#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int multiplier = atoi(argv[1]);
  int multiplicator = atoi(argv[2]);
  int result = 0;

  while(multiplier != 0)
  {
    if(multiplier % 2 != 0)
    {
      result += multiplicator;
    }
    multiplier /= 2;
    multiplicator *= 2;
  }
  printf("wynik mnozenia podanych liczb wynosi = %d\n", result);
}