// Reverse of an array

#include <stdio.h>

int readInt(void)
{
    int n;
    scanf("%d", &n);
    return n;
}

void input(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        arr[i] = readInt();
    }
}

void reverse(int n, int arr[])
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void output(char label[], int n, int arr[])
{
    printf("%s", label);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    n = readInt();

    if (n <= 0)
    {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int arr[n];

    input(n, arr);

    output("Original array: ", n, arr);

    reverse(n, arr);

    output("Reversed array: ", n, arr);

    return 0;
}