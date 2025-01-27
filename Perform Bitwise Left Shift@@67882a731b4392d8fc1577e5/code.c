#include <stdio.h>

int main() {
    int number, shift;
    scanf("%d %d", &number, &shift);

    int result = number << shift;
    printf("%d", result);

    return 0;
} 