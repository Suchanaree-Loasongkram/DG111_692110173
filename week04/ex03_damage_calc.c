#include <stdio.h>
#include <math.h>

int main()
{
    int player_attack;
    int enemy_defense;
    int hit_number;
    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack : ");
    scanf("%d", &player_attack);
    printf("Enemy Defense : ");
    scanf("%d", &enemy_defense);
    printf("Hit Number : ");
    scanf("%d", &hit_number);
    int base_damage = player_attack - enemy_defense;

    if (hit_number % 5 == 0)
    {
        int damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d *** CRITICAL HIT! x1.5 *** \n", damage);
    }
    else
    {
        printf("Damage = %d (Normal) \n", base_damage);
    }
    return 0;
}