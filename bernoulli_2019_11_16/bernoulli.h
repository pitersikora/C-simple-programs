#ifndef BERNOULLI_H
#define BERNOULLI_H
// x^y
long long int powerll(long long int x, long long int y);
// calculates sum 1^y + 2^y + ... + 1000 ^y = s
unsigned long long int calculate_sum(int y, int upper_limit);
// prints 1^y + 2^y + ... + 1000 ^y = s
void print_results(int y, int upper_limit, unsigned long long int s);
// print Jacob Bernoulli table
void print_jbernoulli_table(int nrow);

#endif