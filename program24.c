//arithmetic progression
#include <stdio.h>
int readint(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
int nth_term(int a, int d, int n) {
    return a + (n - 1) * d;
}
int sumAP(int a, int d, int n) {
    return (n * (2 * a + (n - 1) * d)) / 2;
}
void outputTerms(int a, int d, int n, int nthTerm, int sum) {
    printf("The %dth term of the arithmetic progression is: %d\n", n, nthTerm);
    printf("The sum of the first %d terms of the arithmetic progression is: %d\n", n, sum);
}
void outputSummary(int a, int d, int n) {
    printf("Arithmetic Progression Summary:\n");
    printf("First term (a): %d\n", a);
    printf("Common difference (d): %d\n", d);
    printf("Number of terms (n): %d\n", n);
}
int main() {
    int a = readint();
    int d = readint();
    int n = readint();
    int nthTerm = nth_term(a, d, n);
    int sum = sumAP(a, d, n);
    outputTerms(a, d, n, nthTerm, sum);
    outputSummary(a, d, n);
    return 0;
}