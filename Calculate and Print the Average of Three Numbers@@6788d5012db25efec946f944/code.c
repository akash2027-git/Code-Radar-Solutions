#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float sum = a+b+c;
    float avg = sum/3;
    printf("Average: %.2f", avg);
}