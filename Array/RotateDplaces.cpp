// Brute Solution
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

// void RotateArray(int arr[], int size,int d) {
//     d=d%size;
//     vector<int> vec; 
//     for (int i = 0; i < d; i++)
//     {
//        vec.push_back(arr[i]);
//     }
//     int j=0;
//     for (int i = d; i <size; i++)
//     {
//       arr[j]=arr[i];
//       j++;
//     }
//     for (int i = 0; i <vec.size(); i++)
//     {
//        arr[j++] = vec[i];
//     }
// }
//Optimal Solution
void RotateArray(int arr[], int size, int d) {
    d = d % size;  // handle d > size

    if (d == 0) return;

    // Step 1: Reverse first d elements
    reverse(arr, arr + d);

    // Step 2: Reverse remaining elements
    reverse(arr + d, arr + size);

    // Step 3: Reverse entire array
    reverse(arr, arr + size);
}


int main() {
    int size,d;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
     cout << "Enter elements number to rotate: ";
     cin >>d;

        RotateArray(arr,size,d);
           cout << "After rotating Array";
        for (int i = 0; i <size; i++)
        {
            cout << arr[i];
        }
        
    delete[] arr; // free memory
    return 0;
}