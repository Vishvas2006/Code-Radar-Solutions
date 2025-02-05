#include <stdio.h>

int main() {
    float number;

    // Taking a floating-point number as input
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Printing the floating-point number
    printf("You entered: %.2f\n", number);

    return 0;
}
