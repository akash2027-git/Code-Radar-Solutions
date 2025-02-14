#include <stdio.h>

int main() {
    int s = 0;
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a+1; i++) {
        s+=i;
    }
    printf("%d", s);
    return 0;
}