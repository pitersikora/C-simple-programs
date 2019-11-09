#include <stdio.h>
#include <math.h>

int main()
{
    int N = 100;
    int exponent = 2;
    unsigned long long S = 0;

    //x = pow(a, b); polecenie na potegowanie

    for (int i = 1; i <= N; i++)
    {
    S += pow (i, exponent);
    }
    printf("%lld\n", S);
}