#include <stdio.h>

int main()
{
    char name[50];
    int HP;
    int attack_power;
    int defense;
    int level;
    printf("=== สร้างตัวละคร ===\n");
    printf("ชื่อตัวละคร : ");
    scanf("%s", name);
    printf("HP สูงสุด: ");
    scanf("%d", &HP);
    printf("Attack Power : ");
    scanf("%d", &attack_power);
    printf("Defense : ");
    scanf("%d", &defense);
    printf("Level : ");
    scanf("%d", &level);
    printf("=== สรุปข้อมูลตัวละคร ===\n");
    printf("Name: %s\n", name);
    printf("Level: %d\n", level);
    printf("HP : %d\n", HP);
    printf("ATK: %d\n", attack_power);
    printf("DEF: %d\n", defense);
    return 0;
}