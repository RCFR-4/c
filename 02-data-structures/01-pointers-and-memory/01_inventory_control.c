// Create an inventory system using pointers, with functions to add and remove stock while validating quantities.

#include <stdio.h>

void add(int *inventory, int amount_add)
{
    if (amount_add <= 0)
    {
        printf("Invalid quantity\n");
        return;
    }

    *inventory += amount_add;
    printf("Updated inventory: %d\n", *inventory);
}

void remove_stock(int *inventory, int amount_remove)
{
    if (amount_remove <= 0 || amount_remove > *inventory)
    {
        printf("Invalid quantity\n");
        return;
    }

    *inventory -= amount_remove;
    printf("Updated inventory: %d\n", *inventory);
}

int main()
{
    int inventory = 20;

    printf("Initial inventory: %d\n", inventory);

    printf("\nAdding 10 units...\n");
    add(&inventory, 10);

    printf("\nRemoving 5 units...\n");
    remove_stock(&inventory, 5);

    printf("\nTrying to remove 40 units...\n");
    remove_stock(&inventory, 40);

    printf("Final inventory: %d\n", inventory);

    return 0;
}
