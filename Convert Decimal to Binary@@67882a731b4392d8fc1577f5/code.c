#include <stdio.h>

int main() {
    float number;
    scanf("%f", &number);

    for(int i = 31; i >= 0; i--) {
        int bit = (number>>i)&1;
        printf("%d", bit);
    }
    return 0;
}