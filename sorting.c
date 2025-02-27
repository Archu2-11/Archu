#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    
    for (i = 1; i < n; i++) {
        key = arr[i];  // The element to be inserted
        j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Insert the key in its correct position
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Original array: \n");
    printArray(arr, n);

    insertionSort(arr, n); // Call insertion sort

    printf("Sorted array: \n");
    printArray(arr, n); // Print sorted array

    return 0;
}
