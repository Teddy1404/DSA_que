#include <iostream>
using namespace std;

void merge(int arr[], int left[], int left_size, int right[], int right_size) {
    int i = 0, j = 0, k = 0;

    // Merge left and right sub-arrays into arr[]
    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }

    // Copy remaining elements of left[] if any
    while (i < left_size) {
        arr[k++] = left[i++];
    }

    // Copy remaining elements of right[] if any
    while (j < right_size) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int size) {
    if (size < 2) {
        return;
    }

    // Divide the array into two sub-arrays
    int mid = size / 2;
    int left[mid], right[size - mid];
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    // Recursively sort the sub-arrays
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Merge the sorted sub-arrays
    merge(arr, left, mid, right, size - mid);
}

int main() {
    int arr[] = {5, 2, 6, 1, 3, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
