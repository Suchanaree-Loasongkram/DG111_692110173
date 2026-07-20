#include <stdio.h>

int main()
{
    int days;
    scanf("%d", &days);
    switch (days)
    {
    case 1:
        printf("→ Monday (Weekday)");
        break;
    case 2:
        printf("→ Tuesday (Weekday)");
        break;
    case 3:
        printf("→ Wednesday (Weekday)");
        break;
    case 4:
        printf("→ Thursday (Weekday)");
        break;
    case 5:
        printf("→ Friday (Weekday)");
        break;
    case 6:
        printf("→ Saturday (Weekend)");
        break;
    case 7:
        printf("→ Sunday (Weekend)");
        break;
    default:
        printf("→ Invalid");
        break;
    }
    return 0;
}