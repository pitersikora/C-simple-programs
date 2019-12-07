/*
Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy,
a następnie wypisze liczbę liczb dodatnich w niej zawartych.
*/

#include <stdio.h>
#include <stdlib.h>
#include "zadanie_7_func.h"

int main(int argc, char const *argv[])
{
  if(argv[1] == NULL)
  {
    printf("Podaj liczby w parametrach startowych programu!!!\n");
    exit(1);
  }

  generate_result(argc, argv);
}