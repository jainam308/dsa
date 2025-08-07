
#include <iostream>
#include<algorithm>
using namespace std;

// // Brute
// int singleNumber(int arr[],int n){
   
//     for (int i = 0; i < n; i++)
//     {
//          int flag=0;
//       for (int j = 0; j < n; j++)
//       {
//         if (arr[i]==arr[j] && i!=j)
//         {
//            flag=1;
//         }  
//       }
//       if (flag==0)
//       {
//         return i;
//       }
      
//     }
//     return -1;
//     }
    // Better Solution is map
    // Optimal Solution
    int singleNumber(int arr[],int n){
        int xor1=arr[0];
        for (int i = 1; i < n; i++)
        {
            xor1=xor1^arr[i];
            
        }
        return xor1;
        
    }



int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int result = singleNumber(arr, size);
    cout << "Single Number is " << result;

    delete[] arr; // free memory
    return 0;
}