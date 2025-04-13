#include <stdio.h>

int main() {
    float u, a, t, v;

    // Input initial velocity, acceleration, and time
    printf("Enter initial velocity (u), acceleration (a), and time (t): ");
    scanf("%f %f %f", &u, &a, &t);

    // Calculate final velocity
    v = u + a * t;

    printf("Final velocity (v): %.2f m/s\n", v);

    return 0;
}

