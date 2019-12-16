// Napisać funkcję rekurencyjną odwracającą kolejność liter w napisie podanym na wejściu.

#include <stdio.h>
#include "zadanie_3_func.h"

int main()
{
  char n[10000];
  printf("Podaj tekst do odwrocenia\n");

  get_text(n);
  reverse_text(n);
  printf("\n");
}