// Grade from marks
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Your grade is S.\n");
    }
    else if (marks >= 80)
    {
        printf("Your grade is A.\n");
    }
    else if (marks >= 70)
    {
        printf("Your grade is B.\n");
    }
    else if (marks >= 60)
    {
        printf("Your grade is C.\n");
    }
    else
    {
        printf("Your grade is F.\n");
    }
    return 0;
}