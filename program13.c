// Odd or even tally and sum of even and odd numbers    
#include <stdio.h>
int main()
{
    int n, i, odd_count = 0, even_count = 0, odd_sum = 0, even_sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_count++;
            even_sum += arr[i];
        }
        else
        {
            odd_count++;
            odd_sum += arr[i];
        }
    }
    printf("Count of even numbers: %d\n", even_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Count of odd numbers: %d\n", odd_count);
    printf("Sum of odd numbers: %d\n", odd_sum);
    return 0;
}