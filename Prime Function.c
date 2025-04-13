#include <stdio.h>

int prime(int a) {
    if (a <= 1) {
        printf("\n%d is neither a prime number nor a composite number.\n", a);
        return 0;
    }

    if (a == 2) {
        printf("\n%d is a prime number.\n", a);
        return 1;
    }

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            printf("\n%d is a composite number.\n", a);
            return 0;
        }
    }

    printf("\n%d is a prime number.\n", a);
    return 1;
}

int main() {
    int x;
    printf("Enter any number:\n");
    scanf("%d", &x);

    prime(x);
    return 0;
}

