#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = 1; i < a+1; i++) {
        for(int j = 0; j < a-i; j++) {
            printf(" ");
        }
        for(int j = 1; j < 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = a; i > 0; i--) {
        for(int j = 0; j < a-i; j++) {
            printf(" ");
        }
        for(int j = 1; j < i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}