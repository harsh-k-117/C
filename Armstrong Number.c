#include <stdio.h>
#include <math.h>

// Function to check if the number is Armstrong
int is_armstrong(int num) {
    int sum = 0, temp, remainder, n = 0;

    // Store the number in a temporary variable to count digits
    temp = num;

    // Count the number of digits in the number
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Calculate the sum of powers of each digit
    while (temp != 0) {
        remainder = temp % 10;  // Get the last digit
        sum += pow(remainder, n);  // Add the nth power of the digit
        temp /= 10;  // Remove the last digit
    }

    // If the sum is equal to the original number, it's an Armstrong number
    if (sum == num)
        return 1;  // Armstrong number
    else
        return 0;  // Not an Armstrong number
}

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is Armstrong
    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

