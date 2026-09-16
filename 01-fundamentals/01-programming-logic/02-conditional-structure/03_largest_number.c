// Ask the user for two integers and display which number is greater or if they are equal.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter a number: ");
    scanf("%d", &n1);

    printf("Enter another number: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("\nThe numbers are equal\n");
    } else if (n1 > n2) {
        printf("\nThe first number %d is greater\n", n1);
    } else {
        printf("\nThe second number %d is greater\n", n2);
    }

    return 0;
}