#include <stdio.h>

int main() {
    int age, c_status;
    scanf("%d %d", &age, &c_status);
    if(age >= 18 && c_status == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}