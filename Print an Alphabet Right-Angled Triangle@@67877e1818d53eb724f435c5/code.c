#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // char ch = 'A';
    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < i+1; j++) {
            printf("%c ", 65);
        }
        printf("\n");
    }
    return 0;
}