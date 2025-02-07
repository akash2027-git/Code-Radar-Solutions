#include <stdio.h>

int main() {
    int cp, sp;
    if(sp-cp>0) {
        printf("Profit\n");
    } else if (sp - cp<0) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}