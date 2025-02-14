#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = a; i > 0; i--) {
        // intialising the character
        char ch = 'A';
        for(int j = 1; j < i+1; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}