/*
Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy,
a następnie wypisze zawartość tej tablicy od początku do końca.
*/

#include <stdio.h>
#include <stdlib.h>
#include "zadanie_5_func.h"

int main(int argc, char const *argv[])
{
  if(argv[1] == NULL)
  {
    printf("Podaj liczby w parametrach startowych programu!!!\n");
    exit(1);
  }

  generate_result(argc, argv);
}