#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // Return index
    }
    return -1; // Not found
}

int main() {
    int arr[] = {5, 3, 7, 9, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 7;

    int result = linearSearch(arr, n, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
