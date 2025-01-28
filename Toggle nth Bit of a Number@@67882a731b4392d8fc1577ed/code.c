#include <stdio.h>

int main() {
    int num, bit_position;
    scanf("%d %d", &num, &bit_position);
    int bit_mask = 1 << bit_position;
    
    int result = num ^ bit_mask;
    printf("%d", result);

    return 0;
}