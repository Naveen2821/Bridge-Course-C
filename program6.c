//character code report
#include <stdio.h>
int main(void)
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Character: %c\n", c);
    printf("ASCII code: %d\n", c);
    return 0;
}