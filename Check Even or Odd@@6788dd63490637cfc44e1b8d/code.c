#include <stdio.h>

int main() {
    int num;
    sacnf("%d", &num);
    if(num%2==0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}