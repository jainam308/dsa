
#include <iostream>

using namespace std;

void reverse(int arr[],int start,int end){
    while (start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
    void RotateArray(int arr[],int size,int d){
        d=d%size;
        reverse(arr,0,size-d-1);
        reverse(arr,size-d,size-1);
        reverse(arr,0,size-1);
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
    cout << "Rotating array";
    for (int i = 0; i <size; i++)
        {
            cout << arr[i];
        }
        
    delete[] arr; // free memory
    return 0;
}