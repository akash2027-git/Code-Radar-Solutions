#include <stdio.h>

int main() {
    int a;
    for(int i = 1; i < a+1; i++) {
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}