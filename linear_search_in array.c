#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the target element
        }
    }
    return -1;  // Return -1 if the target element is not found
}

int main() {
    int arr[] = {4, 2, 9, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linear_search(arr, size, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
