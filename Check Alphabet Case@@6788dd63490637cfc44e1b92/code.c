// #include <stdio.h>

// int main() {
//     char ch;
//     scanf("%c", &ch);
//     if(ch>='A'&&ch<='Z') {
//         printf("Uppercase\n");
//     } else if(ch>='a'&&ch<='z') {
//         printf("Lowercase\n");
//     } else {
//         printf("Not an alphabet\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int ch;
    scanf("%d", &ch);
    if(ch>=65&&ch<=90) {
        printf("Uppercase\n");
    } else if(ch>=97&&ch<=122) {
        printf("Lowercase\n");
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}