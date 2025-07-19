// Brute Solution
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int findMax(int arr[], int size) {
//   sort(arr,arr+size);
//   return arr[size-1];
// }

// int main() {
//     int size;
//     cout << "Enter number of elements: ";
//     cin >> size;

//     int* arr = new int[size]; // dynamic memory allocation

//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     int result = findMax(arr, size);
//     cout << "Max element is " << result;

//     delete[] arr; // free memory
//     return 0;
// }

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int result = findMax(arr, size);
    cout << "Max element is " << result;

    delete[] arr; // free memory
    return 0;
}
