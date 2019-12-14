/*
Napisz program, który wczyta dwie liczby całkowite a i b (a<b)
a następnie wypisze wszystkie liczby całkowite pomiędzy a i b
*/
#include <stdio.h>
#include "simpio.h"
#include "zadanie_3_func.h"

int main()
{
  printf("Podaj liczbe z dolnego zakresu\n");
  int min = GetInteger();
  printf("Podaj liczbe z gornego zakresu\n");
  int max = GetInteger();

  generate_result(min, max);
}