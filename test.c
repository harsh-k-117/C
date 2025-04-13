#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int n, i;
    float value, min, max, sum = 0, average;

    file = fopen("sensor1.txt", "r");
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        exit(1);
    }

    fscanf(file, "%d", &n);
    if (n <= 0) {
        printf("Invalid number of data points.\n");
        fclose(file);
        return 0;
    }

    fscanf(file, "%f", &value);
    min = max = value;
    sum += value;

    for (i = 1; i < n; i++) {
        fscanf(file, "%f", &value);
        if (value < min) min = value;
        if (value > max) max = value;
        sum += value;
    }

    average = sum / n;

    printf("Summary Report of Sensor Values\n");
    printf("--------------------------------\n");
    printf("Number of Data Points: %d\n", n);
    printf("Minimum Value: %.2f\n", min);
    printf("Maximum Value: %.2f\n", max);
    printf("Average Value: %.2f\n", average);

    fclose(file);

    return 0;
}
