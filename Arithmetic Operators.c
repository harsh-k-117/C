#include <stdio.h>

int main() {
    float a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Perform arithmetic operations
    printf("Addition: %.2f\n", a + b);
    printf("Subtraction: %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);
    if (b != 0) {
        printf("Division: %.2f\n", a / b);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
