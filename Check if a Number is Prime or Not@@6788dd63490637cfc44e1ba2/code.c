#include <stdio.h>

int main() {
    int n;
    int multiples = 0;
    for(int i = 1; i <= n; i++) {
        if(n%i == 0 && n%n == 0) {
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