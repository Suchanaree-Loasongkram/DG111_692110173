#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("sum = %d\n", sum);
    sum = 0;
    i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
    sum = 0;
    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("sum = %d\n", sum);
    return 0;
}