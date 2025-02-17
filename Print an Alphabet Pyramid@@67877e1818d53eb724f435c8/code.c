#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = 1; i < a+1; i++) {
        char ch = 'A';
        for(int j = 0; j < a-i; j++) {
            printf(" ");
        }
        for(int j = 1; j < 2*i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}