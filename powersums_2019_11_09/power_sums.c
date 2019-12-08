/*
Program liczący sumę potęg o podstawach 1 do N, wykładnik potęgi wzrasta z każdą kalkulacją od 1 do exponent.
Jego możlwiości ogranicza jedynie wielkość tablic zadeklarowanych w programie: domyślnie 50 - zmiany tego
parametru można dokonać w pliku "array_size_limit.h". Ponieważ każda cyfra wyniku zajmuje 1 element w tablicy,
Przy takiej wielkości tablicy obliczymy maksymalnie liczbę która ma 50 cyfr.
Ponieważ program bernoulli_table.c ma ograniczenia ze względu na pojemność zmiennych, wszelkie modyfikacje które
były wymagane do zaliczenia wprowadzono w tym programie.
*/
#include <stdio.h>
#include "ansi_color.h"
#include "array_op.h"
#include "array_math.h"
#include "power_table.h"

int main()
{
  int N;
  int exponent;

  // ask user for max number to sum and its max exponent
  printf("Enter max base number \n");
  scanf("%d", &N);
  printf("Enter max exponent number \n");
  scanf("%d", &exponent);

  create_power_table (N, exponent);
}