#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int j = 1; j < 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i <= n; i++) {
        for(int j = n-i; j >= 1; j--) {
            printf(" ");
        }
        for(int j = n-1; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}