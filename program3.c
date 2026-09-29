//swap using temp and array
#include <stdio.h>
int main() {
    int arr[2], temp;
    printf("Enter first number: ");
    scanf("%d", &arr[0]);
    printf("Enter second number: ");
    scanf("%d", &arr[1]);
    // Swapping using a temporary variable
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    printf("After swapping:\n");
    printf("First number: %d\n", arr[0]);
    printf("Second number: %d\n", arr[1]);

    return 0;
}