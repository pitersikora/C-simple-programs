#include <stdio.h>
#include <math.h>

int main()
{
    char* name = "piotr";
    //char name = name[32 + 1];
    int count = 3;

    scanf("%d", &count);
    //scanf("%s", name);

    printf("%s ", "hello");
    for (int i = 0; i < count; i++)
    {
        printf("%s ", name);
    }

    printf("\b!\n");
}