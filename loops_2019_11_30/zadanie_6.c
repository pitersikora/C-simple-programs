/*
Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy,
a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.
*/

#include <stdio.h>
#include <stdlib.h>
#include "zadanie_6_func.h"

int main(int argc, char const *argv[])
{
  if(argv[1] == NULL)
  {
    printf("Podaj liczby w parametrach startowych programu!!!\n");
    exit(1);
  }

  generate_result(argc, argv);
}