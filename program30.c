//sum of two fractions
#include <stdio.h>
typedef struct {
    int numerator;
    int denominator;
} Fraction;
fraction inputFraction() {
    Fraction f;
    printf("Enter numerator: ");
    scanf("%d", &f.numerator);
    printf("Enter denominator: ");
    scanf("%d", &f.denominator);
    return f;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    int divisor = gcd(result.numerator, result.denominator);
    result.numerator /= divisor;
    result.denominator /= divisor;
    return result;
}
void output(Fraction f) {
    printf("Sum: %d/%d\n", f.numerator, f.denominator);
}
int main() {
    Fraction f1 = inputFraction();
    Fraction f2 = inputFraction();
    Fraction sum = addFractions(f1, f2);
    output(sum);
    return 0;
}