#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;  // Count of non-zero elements

    // Traverse the array. If the element is not zero, then
    // place the element at the current count index and
    // increment the count index.
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Here count is incremented
        }
    }

    // Now all non-zero elements have been shifted to the front
    // and count is set to the index of the first 0.
    // Fill remaining array positions with 0.
    while (count < n) {
        arr[count++] = 0;
    }

    // Print the array after moving zeroes to the end
    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}