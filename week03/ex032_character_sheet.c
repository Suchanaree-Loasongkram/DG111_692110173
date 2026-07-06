#include <stdio.h>
#include <ctype.h>

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
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = toupper(name[i]);
    }
    printf("=== CHARACTER SHEET ===\n");
    printf("╔════════════════════════════╗\n");
    printf("║ %-20s       ║\n", name);
    printf("╠════════════════════════════╣\n");
    printf("║ Level: %-20d║\n", level);
    printf("║ HP: %d / %-18d║\n", HP, HP);
    printf("║ ATK: %-20d  ║\n", attack_power);
    printf("║ DEF: %-20d  ║\n", defense);
    printf("╠════════════════════════════╣\n");
    printf("║ HP Bar: [██████████]       ║\n");
    printf("╚════════════════════════════╝\n");
    return 0;
}