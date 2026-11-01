// Ask the user for two numbers and an operator and display the result.

#include <stdio.h>

int main()
{
    float n1, n2;
    char operator_;

    printf("Enter the first number: ");
    scanf("%f", &n1);

    printf("Enter the second number: ");
    scanf("%f", &n2);

    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &operator_);

    switch (operator_)
    {
        case '+':
            printf("\nResult of sum: %.2f\n", n1 + n2);
            break;

        case '-':
            printf("\nResult of subtraction: %.2f\n", n1 - n2);
            break;

        case '*':
            printf("\nResult of multiplication: %.2f\n", n1 * n2);
            break;

        case '/':
            if (n2 == 0)
            {
                printf("\nCannot divide by zero.\n");
                break;
            }
            else
            {
                printf("\nResult of division: %.2f\n", n1 / n2);
                break;
            }

        default:
            printf("\nInvalid operator.\n");
            break;
    }

    return 0;
}