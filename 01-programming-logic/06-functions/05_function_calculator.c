// Create a calculator with four arithmetic functions, a repeating menu, invalid-option handling, and division-by-zero protection.

#include <stdio.h>

float sum(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int main()
{
    float n, n2;
    int op;

    do
    {
        printf("------CALCULATOR------\n\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n0 - Exit");

        printf("\n\nChoose: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("Enter the first number: ");
            scanf("%f", &n);
            printf("Enter the second number: ");
            scanf("%f", &n2);

            printf("\nResult: %.2f\n", sum(n, n2));
            break;

        case 2:
            printf("Enter the first number: ");
            scanf("%f", &n);
            printf("Enter the second number: ");
            scanf("%f", &n2);

            printf("\nResult: %.2f\n", subtraction(n, n2));
            break;

        case 3:
            printf("Enter the first number: ");
            scanf("%f", &n);
            printf("Enter the second number: ");
            scanf("%f", &n2);

            printf("\nResult: %.2f\n", multiplication(n, n2));
            break;

        case 4:
            printf("Enter the first number: ");
            scanf("%f", &n);
            printf("Enter the second number: ");
            scanf("%f", &n2);

            if (n2 != 0)
            {
                printf("\nResult: %.2f\n", division(n, n2));
            }
            else
            {
                printf("\nInvalid calculation\n");
            }

            break;

        case 0:
            printf("Program terminated!");
            break;

        default:
            printf("Invalid option");
            break;
        }

    } while (op != 0);

    return 0;
}