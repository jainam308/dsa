// Brute Solution
#include <iostream>
#include<algorithm>
using namespace std;
int missingNumber(int arr[],int size){
    for (int i = 0; i <= size; i++)
    {
         bool flag=true;
       for (int j = 0; j< size;j++)
       {
        if (i == arr[j])
        {
           flag=false;
           break;
        }     
       }
       if (flag)
       {
        return i;
       }    
    }  
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int result = missingNumber(arr, size);
    cout << "Missing Number is " << result;

    delete[] arr; // free memory
    return 0;
}