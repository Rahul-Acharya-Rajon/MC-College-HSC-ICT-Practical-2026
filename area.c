#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter the Triangle's\n");

    printf("Base: ");
    scanf("%f", &base);

    printf("Height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is %f square unit\n", area);

    return 0;
}