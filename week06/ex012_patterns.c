#include <stdio.h>

int main()
{
    int col, row;
    for (row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (row = 1; row <= 4; row++)
    {
        for (col = 1; col <= 4; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (row = 1; row <= 3; row++)
    {
        for (col = 1; col <= 3 - row; col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (row = 2; row >= 1; row--)
    {
        for (col = 1; col <= 3 - row; col++)
        {
            printf("  ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}