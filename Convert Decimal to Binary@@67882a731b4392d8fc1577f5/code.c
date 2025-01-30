#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for(int i = 31; i >= 0; i--) {
        int bit = (number>>i)&1;
        printf("%d", bit);
    }
    return 0;
}