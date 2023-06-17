#include <iostream>
using namespace std;

int findPivot(int arr[], int low, int high)
{
    // Base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2;

    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;

    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);

    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);

    return findPivot(arr, mid + 1, high);
}

int main()
{
    int arr[] = { 10, 12, 15, 20, 25, 3, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = findPivot(arr, 0, n - 1);
    if (pivot == -1)
        cout << "Array is not rotated";
    else
        cout << "Pivot is at index " << pivot;

    return 0;
}
