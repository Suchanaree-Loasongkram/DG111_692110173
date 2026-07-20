#include <stdio.h>

int main()
{
    int score;
    printf("score: ");
    scanf("%d", &score);
    printf("→ Grade: ");
    if (score >= 80 && score <= 100)
    {
        printf("A (4.0) — Pass");
    }
    else if (score >= 75 && score <= 79)
    {
        printf("B+ (3.5) — Pass");
    }
    else if (score >= 70 && score <= 74)
    {
        printf("B (3.0) — Pass");
    }
    else if (score >= 65 && score <= 69)
    {
        printf("C+ (2.5) — Pass");
    }
    else if (score >= 60 && score <= 64)
    {
        printf("C (2.0) — Pass");
    }
    else if (score >= 55 && score <= 59)
    {
        printf("D+ (1.5) — Pass");
    }
    else if (score >= 50 && score <= 54)
    {
        printf("D (1.0) — Pass");
    }
    else
    {
        printf("F (0.0) — Fail");
    }
    return 0;
}