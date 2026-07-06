#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float gpa;
    char major[50];
    printf("=== ป้อนข้อมูล ===\n");
    printf("ชื่อ: ");
    scanf("%s", name);
    printf("อายุ: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &gpa);
    printf("สาขา: ");
    scanf("%s", major);
    printf("=== PERSONAL CARD ===\n");
    printf("┌──────────────────┐\n");
    printf("│ name: %-10s │\n", name);
    printf("│ age: %-10d  │\n", age);
    printf("│ gpa: %-10.2f  │\n", gpa);
    printf("│ major: %-10s│\n", major);
    printf("└──────────────────┘\n");
    return 0;
}