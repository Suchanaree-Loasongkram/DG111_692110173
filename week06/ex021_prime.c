#include <stdio.h>

int main()
{
    int isPrime = 1;
    int n;
    printf("Enter positive integer: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0 || n <= 1)
    {
        printf("%d is NOT a Prime Number.", n);
    }
    else
    {
        printf("%d is a Prime Number.", n);
    }
    return 0;
}