// #include <stdio.h>
// #include <stdbool.h>

// // Function to check if the array is sorted in ascending order
// bool isSorted(int arr[], int n) {
//     for(int i = 0; i < n-1; i++) {
//         if(arr[i] > arr[i+1]) {
//             return false; // Returns false if any element is greater than the next one.
//         }
//     }
//     return true; // Returns true if all elements are in order
// }

// int main() {
//     int n;
//     scanf("%d ", &n);
//     // Declare an Array of size n
//     int arr[n];

//     // Prompt the user to enter the elements of the Array 
//     for(int i = 0; i < n; i++) {
//         scanf("%d ", &arr[i]);
//     }

//     // Check is the Array is sorted
//     if(isSorted(arr, n)) {
//         printf("Sorted\n");
//     } else {
//         printf("Not Sorted\n");
//     }
//     return 0;
// }

#include <stdio.h>

bool isSroted(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if isSorted(arr, n) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }
}