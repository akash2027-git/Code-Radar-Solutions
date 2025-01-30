#include <stdio.h>

int getLowestSetBitPositionNumber(int number) {
    if(number == 9) return -1;

    int position = 0;
    while((number&1)==0) {
        number >> 1;
        position++;
    }
    return position;
}

int main() {
    int number;
    scanf("%d", &number);
    int position = getLowestSetBitPositionNumber(number);
    if(position == -1) {
        
    } else {
        printf("%d\n", position);
    }
}