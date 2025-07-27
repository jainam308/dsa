// Brute Solution
#include <iostream>
#include<algorithm>
using namespace std;

void leftRotateArray(int arr[], int size) {
    int temp = arr[0];  // Step 1: Store first element

    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Step 2: Shift elements left
    }

    arr[size - 1] = temp;  // Step 3: Place first element at end
}



int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

        leftRotateArray(arr,size);
           cout << "After rotating Array";
        for (int i = 0; i <size; i++)
        {
            cout << arr[i];
        }
        
    delete[] arr; // free memory
    return 0;
}