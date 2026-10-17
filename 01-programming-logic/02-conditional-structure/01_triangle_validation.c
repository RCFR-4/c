// Ask the user for three side lengths and display whether they can form a triangle.

#include <stdio.h>

int main()
{
    float side1, side2, side3;

    printf("Enter the first side: ");
    scanf("%f", &side1);

    printf("Enter the second side: ");
    scanf("%f", &side2);

    printf("Enter the third side: ");
    scanf("%f", &side3);

    if ((side1 < side2 + side3) && (side2 < side1 + side3) && (side3 < side1 + side2)) {
        printf("\nThe sides can form a triangle.\n");
    } else {
        printf("\nThe sides cannot form a triangle.\n");
    }

    return 0;
}