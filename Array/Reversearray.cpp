#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // Reverse the entire array
    reverse(arr, 0, size - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
