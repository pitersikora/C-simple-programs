/*
Napisz program monożący liczby tak jak to pokazano w tym filmiku
[A Night Of Numbers – Go Forth And Multiply](https://www.youtube.com/watch?v=Nc4yrFXw20Q).
*/

#include <stdio.h>
#include <stdlib.h>
#include "zadanie_9_func.h"

int main(int argc, char const *argv[])
{
  if(argv[1] == NULL)
  {
    printf("Podaj liczby w parametrach startowych programu!!!\n");
    exit(1);
  }

  int multiplier = atoi(argv[1]);
  int multiplicator = atoi(argv[2]);

  generate_result(multiplier, multiplicator);
}