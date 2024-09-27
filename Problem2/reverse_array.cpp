#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the size of the array
    cout << "Array size: ";
    cin >> n;

    int arr[n];  // Declare a regular array of size n

    // Ask the user to input elements of the array
    cout << "Input: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array in place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Print the reversed array
    cout << "Output: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;

    return 0;
}