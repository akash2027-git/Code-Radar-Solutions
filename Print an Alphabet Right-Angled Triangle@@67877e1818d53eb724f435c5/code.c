#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // char ch = 'A';
    for(int i = 1; i < n+1; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c ", 65+j);
        }
        printf("\n");
    }
    return 0;
}