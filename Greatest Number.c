#include <stdio.h>

int main() {
    float a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Find the greatest number
    if (a >= b && a >= c) {
        printf("The greatest number is: %.2f\n", a);
    } else if (b >= a && b >= c) {
        printf("The greatest number is: %.2f\n", b);
    } else {
        printf("The greatest number is: %.2f\n", c);
    }

    return 0;
}

