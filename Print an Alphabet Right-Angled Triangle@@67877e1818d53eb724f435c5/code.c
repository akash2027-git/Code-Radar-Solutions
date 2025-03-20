#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for(int i = 1; i < n+1; i++) {
        for(j = 1; j < i+1; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}