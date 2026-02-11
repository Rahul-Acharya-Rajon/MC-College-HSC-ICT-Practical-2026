#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter a positive integer number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2*n-1; i += 2)
    {
        sum += i;
    };

    printf("Result: %d", sum);

    return 0;
}
