//sum and average of an array
#include <stdio.h>
int readint(void) {
    int n;
    scanf("%d", &n);
    return n;
}
void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        arr[i] = readint();
    }
}
int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
double average(int arr[], int n) {
    if (n == 0) {
        return 0.0; // Avoid division by zero
    }
    return (double)sum(arr, n) / n;
}
void output(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    n = readint();
    
    if (n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1; // Exit with error code
    }

    int arr[n];
    input(arr, n);
    
    int total = sum(arr, n);
    double avg = average(arr, n);
    
    output(arr, n);
    printf("Sum: %d\n", total);
    printf("Average: %.2f\n", avg);
    
    return 0;
}