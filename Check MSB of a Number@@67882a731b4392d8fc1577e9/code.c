#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int MSB = (number & 0x80000000);

    if(MSB!=0) {
        printf("Set\n");
    } else{
        printf("Not Set\n");
    }
    return 0;
}