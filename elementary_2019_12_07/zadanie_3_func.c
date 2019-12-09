#include <stdio.h>
#include <math.h>
#include "zadanie_3_func.h"

void calculate_pi(int max_expressions)
{
  double long result = 4;
  int add_or_subtract = 0;

  for(int i = 1; i <= max_expressions; i++)
  {
    if(add_or_subtract == 0)
    {
      result = result - (4/((double)i*2+1));
      add_or_subtract = 1;
    } else {
      result = result + (4/((double)i*2+1));
      add_or_subtract = 0;
    }
  }
  printf("\t%d\t\t\t|\t    %.15Lf\t\n",max_expressions, result);
}

void generate_table_1()
{
  printf("\tTabelka wyników dla pierwszej częsci zadania\n");
  printf("--------------------------------------------------------------\n");
  printf("\tPrzeliczone wyrażenia\t|\t    Wartość\t\n");
  printf("--------------------------------------------------------------\n");
}

void find_pi_expression(double long result_to_find)
{
  double long result = 4;
  int add_or_subtract = 0;
  int iterator = 0;
  double long limit_pi = result_to_find + (1 / pow(10, find_decimal_point(result_to_find)));

  while(1)
  {
    if(add_or_subtract == 0)
    {
      iterator ++;
      result = result - (4/((long double)iterator*2+1));
      add_or_subtract = 1;
    } else {
      iterator ++;
      result = result + (4/((long double)iterator*2+1));
      add_or_subtract = 0;
      if(result < limit_pi)
      {
        break;
      }
    }
  }
  printf("\t%Lf\t\t|\t    %d\t\n",result_to_find, iterator);
}

void generate_table_2()
{
  printf("\tTabelka wyników dla drugiej częsci zadania\n");
  printf("--------------------------------------------------------------\n");
  printf("\tSzukana wartosc\t\t|\tObliczone wyrazenia\t\n");
  printf("--------------------------------------------------------------\n");
}

double long find_decimal_point(double long num_to_check)
{
  int empty_decimal_point = 0;

  while(fmod(num_to_check * pow(10, empty_decimal_point), 10) != 0)
  {
    empty_decimal_point ++;
  }

  return empty_decimal_point - 1;
}