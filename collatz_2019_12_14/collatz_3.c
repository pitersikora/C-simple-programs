/* Napisz program który sprawdzi czy liczby w zakresie od 1 do 100
są zgodne z problemem Collatza "https://pl.wikipedia.org/wiki/Problem_Collatza"
przedstawi wynik w postaci tabeli gdzie:
N - liczba podana przez użytkownika
OK - czy liczba jest zgodna z problemem Collatza
#N - ile kroków wykonano w rozwiązaniu problemu
MAX - liczba o największej wartości w ciągu podczas rozwiązywania
*/

#include <stdio.h>
#include "collatz_3_func.h"

int main()
{
  generate_table();
  calculate_collatz(100);
}