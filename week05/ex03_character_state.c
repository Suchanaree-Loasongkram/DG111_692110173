#include <stdio.h>

int main()
{
    int max_hp;
    int damage;
    int poisoned_input;
    int attack_count;
    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage Taken: ");
    scanf("%d", &damage);

    int hp = max_hp - damage;
    if (hp < 0)
        hp = 0;
    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    _Bool is_poisoned = poisoned_input;
    printf("Attack Count: ");
    scanf("%d", &attack_count);
    printf("=== Character Status ===\n");

    if (hp <= 0)
    {
        printf("State: DEAD");
    }
    else if ((float)hp / max_hp < 0.25)
    {
        printf("State: CRITICAL");
    }
    else if (is_poisoned == 1)
    {
        printf("State: POISONED");
    }
    else if (attack_count > 0)
    {
        printf("State: NORMAL + Ultimate!");
    }
    else
    {
        printf("State: NORMAL");
    }
    return 0;
}