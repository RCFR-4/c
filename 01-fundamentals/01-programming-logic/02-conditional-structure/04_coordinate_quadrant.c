// Ask the user for two coordinates and display where the point is located.

#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter y: ");
    scanf("%f", &y);

    if ((x > 0) && (y > 0))
    {
        printf("\nThe point is in the first quadrant.\n");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("\nThe point is in the second quadrant.\n");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("\nThe point is in the third quadrant.\n");
    }
    else if ((x > 0) && (y < 0))
    {
        printf("\nThe point is in the fourth quadrant.\n");
    }
    else if ((x == 0) && (y != 0))
    {
        printf("\nThe point is on the Y axis.\n");
    }
    else if ((x != 0) && (y == 0))
    {
        printf("\nThe point is on the X axis.\n");
    }
    else
    {
        printf("\nThe point is at the origin.\n");
    }

    return 0;
}