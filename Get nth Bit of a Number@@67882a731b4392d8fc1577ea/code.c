#include <stdio.h>

int main() {
    int num, bit_position;
    scanf("%d %d", &num, &bit_position);

    int bit_mask = 1 << bit_position; // Creating a bit mask by shifting 1 to the left by bit_position.
    // Perform a bitwise and(&) operation.
    int result = num & bit_mask;
    // Check it the result is non-zero
    if(result != 0) {
        printf("1\n"); // Print 1 if the bit is set.
    } else {
        printf("0\n"); // Print 0 if the bit is not set.
    }

    return 0;
}