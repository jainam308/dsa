// Brute Solution
#include <iostream>
#include<algorithm>
using namespace std;

// int findSecondMax(int arr[], int size) {
//   sort(arr,arr+size);
//  int largest=arr[size-1];
//   for (int i = size -2; i>=0; i--)
//   {
//     if (largest !=arr[i])
//     {
//         return arr[i];
//     }
    
//   }
//     return -1;//to indicate second max doesn't exist
// }
//optimal
int  findSecondMax(int arr[],int size){
  int max=arr[0];
  int secondMax;
  for(int i=0;i<size-1;i++){
    if(arr[i]>max){
      secondMax=max;
      max=arr[i];
    }
    else if (arr[i]<max&&arr[i]>secondMax)
    {
      secondMax=arr[i];
    }
    
  }
  return secondMax;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int result = findSecondMax(arr, size);
    cout << "Max element is " << result;

    delete[] arr; // free memory
    return 0;
}