#include <stdio.h>
#include <math.h>
#include "bernoulli.h"

#define UPPER_LIMIT 100

// to do
long long int powerll(long long int x, long long int y)
{
  return powl(x, y);
}

unsigned long long int calculate_sum(int y, int upper_limit)
{
  unsigned long long int result = 0;
  for(int i =1; i <= UPPER_LIMIT; i++)
  {
    result += powerll(i, y);
  }
  return result;
}

void print_jbernoulli_table(int nrow)
{
  for(int i = 0; i <= nrow; i++)
  {
    print_results(i, UPPER_LIMIT, calculate_sum(i, UPPER_LIMIT));
  }
}

void print_results(int y, int upper_limit, unsigned long long int s)
{
  printf("1^%2d + 2^%2d + ... + %d^%2d = \t%llu\n", y, y, upper_limit, y, s);
}