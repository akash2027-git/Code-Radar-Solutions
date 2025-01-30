#include <stdio.h>

int main() {
    float number;
    scanf("%f", &number);
    int started = 0;
    for(int i = 31; i >= 0; i--) {
        int bit = (number>>i) & 1;
        if(bit == 1) {
            started = 1;
        }
        if(started) {
            printf("%d", bit);
        }
    }
    if(started == 0) {
        printf("0")
    }
    printf("\n");
    return 0;
}