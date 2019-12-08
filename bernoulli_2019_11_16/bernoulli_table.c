/*
Program liczący sumę potęg o podstawie od 1 do 100 podniesionych do potęg od 1 do 10
Ze względu na ograniczenia w rozmiarze typu unsigned long long, program błędnie liczy
sumę potęg o podstawie od 1 do 100 przy wykładniku równym 10.
*/

#include "bernoulli.h"

int main()
{
  print_jbernoulli_table(10);
}