#include <stdio.h>

int main(void)
{
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of terms.\n");
        return 0;
    }

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%lld", first);

        if (i < n)
            printf(" ");

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}