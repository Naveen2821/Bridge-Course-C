//square and cube of a given Number using function

#include <stdio.h>

void printSquare(int num)
{
    printf("Square of %d is %d\n", num, num * num);
}

void printCube(int num)
{
    printf("Cube of %d is %d\n", num, num * num * num);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printSquare(number);
    printCube(number);

    return 0;
}