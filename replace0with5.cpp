#include<iostream>
using namespace std;

int main() {
    int arr[3];

    // Input elements into the array
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    // Replace 0 with 5
    for(int i = 0; i < 3; i++) {
        if(arr[i] == 0) {
            arr[i] = 5;
        }
    }

    // Output the modified array with spaces between elements
    for(int i = 0; i < 3; i++) {
        cout << arr[i];
        if(i < 2) {
            cout << " "; // Print space after each element except the last one
        }
    }

    return 0;
}

