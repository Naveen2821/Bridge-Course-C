// Sum of N numbers and factorial of N

#include <stdio.h>

int main()
{
    int n, i, sum = 0, factorial = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Sum of %d numbers: %d\n", n, sum);
    printf("Factorial of %d: %d\n", n, factorial);

    return 0;
}