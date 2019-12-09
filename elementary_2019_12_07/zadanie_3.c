/*
Oblicz wartość π (pi) z nieskończonej sumy
π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Wypisz w postaci tabelki przybliżoną wartość π przez sumę 10, 100, 1000 i 1_000_000 wyrazów
tego szeregu. Ile wyrazów musisz wysumować, zanim po raz pierwszy otrzymasz
kolejne przybliżenia π: 3.14, 3.141, 3.1415 ? Wyniki wypisz w postaci tabelki.
*/

#include <stdio.h>
#include "zadanie_3_func.h"

int main()
{
  generate_table_1();
  calculate_pi(10);
  calculate_pi(100);
  calculate_pi(1000);
  calculate_pi(1000000);
  printf("\n\n");
  generate_table_2();
  find_pi_expression(3.14);
  find_pi_expression(3.141);
  find_pi_expression(3.1415);
}