// Odd or even tally

#include <stdio.h>
int main()
{
    int num, odd = 0, even = 0, i;
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
    return 0;
}