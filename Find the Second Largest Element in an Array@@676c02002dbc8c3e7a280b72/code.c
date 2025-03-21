#include <stdio.h>

int main() {
    int n, SECOND_MAX;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[i+1]) {
            SECOND_MAX = arr[i];
        }
    }
    printf("%d", SECOND_MAX);

    return 0;
}