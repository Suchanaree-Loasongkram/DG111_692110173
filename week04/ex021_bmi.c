#include <stdio.h>

int main()
{
    int weight;
    int height;
    printf("Input Weight (kg): ");
    scanf("%d", &weight);
    printf("Input Height (cm): ");
    scanf("%d", &height);
    float height_m = height / 100.0;
    float bmi = weight / (height_m * height_m);
    printf("Output BMI: %.2f", bmi);
    if (bmi < 18.5)
    {
        printf("→ Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("→ Normal\n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("→ Overweight\n");
    }
    else
    {
        printf("→ Obese\n");
    }

    return 0;
}