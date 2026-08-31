#include <stdio.h>
#include <math.h>

int calculateDamage(int attack, int defense);
int isCriticalHit(int roundNumber);
void displayHP(int current, int max);
void printCombatResult(int round, int damage, int isCrit);

int main()
{
    int attack = 80;
    int defense = 25;
    int enemyHP = 500;
    int enemyMaxHP = 500;
    printf("=== COMBAT SIMULATOR ===\n");
    printf("-------------------------------------------\n");
    for (int round = 1; round <= 10 && enemyHP > 0; round++)
    {
        int isCrit = isCriticalHit(round);

        int damage = calculateDamage(isCrit ? (int)(attack * 1.5) : attack, defense);

        enemyHP -= damage;
        if (enemyHP < 0)
            enemyHP = 0;

        printCombatResult(round, damage, isCrit);

        displayHP(enemyHP, enemyMaxHP);
    }
    return 0;
}

int isCriticalHit(int roundNumber)
{
    int isCrit = (roundNumber % 5 == 0);
    return isCrit;
}

int calculateDamage(int attack, int defense)
{
    int scaledAttack = attack;
    int damage = scaledAttack - defense;
    if (damage < 1)
        damage = 1;
    return damage;
}

void displayHP(int current, int max)
{
    int filled = (current * 10) / max;
    char bar[11];
    for (int i = 0; i < 10; i++)
    {
        bar[i] = (i < filled) ? '#' : '-';
    }
    bar[10] = '\0';
    printf("Enemy HP: [%s] %d/%d\n", bar, current, max);
}

void printCombatResult(int round, int damage, int isCrit)
{
    printf("Round %2d: ", round);
    if (isCrit)
    {
        printf("*** CRITICAL! ***");
    }
    else
    {
        printf("Normal ");
    }
    printf(" — Damage: %2d | ", damage);
}