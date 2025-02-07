#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is an alphabet letter
    
    else if (isalpha(ch)) {
        printf("Consonant\n");
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    // If it's none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
