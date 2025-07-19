// Brute Solution
#include <iostream>
#include<algorithm>
using namespace std;
bool isSorted(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
       if(arr[i]>arr[i+1]){
        return false;
       }
    }
    return true;
    
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    bool result=isSorted(arr,size);
    if(result){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }

    delete[] arr; // free memory
    return 0;
}