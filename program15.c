//reverse of palindrome
#include <stdio.h>
int main()
{
    int num, reverse = 0, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    if (original == reverse)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}