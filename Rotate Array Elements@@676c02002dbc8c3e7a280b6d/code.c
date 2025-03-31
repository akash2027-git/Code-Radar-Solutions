#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while(start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k%=n;
    if (k < 0) {
        k+=n;
    }

    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    rotateArray(arr, n, k);
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}