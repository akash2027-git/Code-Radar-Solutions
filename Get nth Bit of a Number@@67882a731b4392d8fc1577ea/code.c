#include <stdio.h>

int main() {
    int num, bit_position;
    scanf("%d %d", &num, &bit_position);

    int bit_mask = 1 << bit_position;
    int result = num & bit_mask;

    if(result != 0) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return 0;
}