#include <stdio.h>

int main() {
    int n,count=1;
    scanf("%d", &n);
    for(int i = 1; i < n+1; i++) {
        for(int j = 0; j < i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}