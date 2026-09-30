//power of a number
#include <stdio.h>
int readint(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
void output(int base, int exp, int result) {
    printf("%d^%d = %d\n", base, exp, result);
}
int main() {
    int base = readint();
    int exp = readint();
    int result = power(base, exp);
    output(base, exp, result);
    return 0;
}