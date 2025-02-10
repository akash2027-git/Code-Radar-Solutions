#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int multiples = 0;
    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            multiple++;
        }
        if(multiples == 2) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
    return 0;
}