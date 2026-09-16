// Ask the user for a purchase amount and apply a discount according to the total value.

#include <stdio.h>

int main()
{
    float purchase, discount, finalPrice;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchase);

    if (purchase >= 500) {
        discount = (purchase * 15) / 100;
        finalPrice = purchase - discount;

        printf("\nThe final price with discount is: %.2f\n", finalPrice);
    } else if (purchase >= 200) {
        discount = (purchase * 10) / 100;
        finalPrice = purchase - discount;

        printf("\nThe final price with discount is: %.2f\n", finalPrice);
    } else {
        printf("\nNo discount applies\n");
    }

    return 0;
}