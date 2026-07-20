#include <stdio.h>

int main()
{
    int gold = 1000;
    int remaining;
    int health_potion = 50;
    int mana_potion = 80;
    int iron_sword = 500;
    int leather_armor = 300;
    printf("=== ITEM SHOP ===\n");
    printf("Gold: 1,000\n");
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");
    int select_item;
    printf("Select item: ");
    scanf("%d", &select_item);
    switch (select_item)
    {
    case 1:
        printf("Health Potion: 50 Gold\n");
        remaining = gold - health_potion;
        printf("Remaining: %d Gold\n", remaining);
        printf("HP Bonus: +50\n");
        printf("Item purchased successfully! ✓");
        break;
    case 2:
        printf("Mana Potion: 80 Gold\n");
        remaining = gold - mana_potion;
        printf("Remaining: %d Gold\n", remaining);
        printf("MP Bonus: +30\n");
        printf("Item purchased successfully! ✓");
        break;
    case 3:
        printf("Iron Sword: 500 Gold\n");
        remaining = gold - iron_sword;
        printf("Remaining: %d Gold\n", remaining);
        printf("ATK Bonus: +20\n");
        printf("Item purchased successfully! ✓");
        break;
    case 4:
        printf("Leather Armor: 300 Gold\n");
        remaining = gold - leather_armor;
        printf("Remaining: %d Gold\n", remaining);
        printf("DEF Bonus: +15\n");
        printf("Item purchased successfully! ✓");
        break;
    case 5:
        printf("Exit the shop.");
        break;
    default:
        printf("Invalid");
        break;
    }
}