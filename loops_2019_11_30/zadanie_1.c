// Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające podanej liczby.
#include <stdio.h>
#include <stdlib.h>
#include "zadanie_1_func.h"

int main(int argc, char const *argv[])
{
  if(argv[1] == NULL)
  {
    printf("Podaj liczbe w parametrach startowych programu!!!\n");
    exit(1);
  }

  generate_result(argv);
}