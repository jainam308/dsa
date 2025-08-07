
#include <iostream>
#include<algorithm>
using namespace std;
// Brute Solution
// int missingNumber(int arr[],int size){
//     for (int i = 0; i <= size; i++)
//     {
//          bool flag=true;
//        for (int j = 0; j< size;j++)
//        {
//         if (i == arr[j])
//         {
//            flag=false;
//            break;
//         }     
//        }
//        if (flag)
//        {
//         return i;
//        }    
//     }  
// }
// Better
// int missingNumber(int arr[],int size){
//      int hash_arr[size+1]={0};
//         for(int i=0;i<size;i++){
//             hash_arr[arr[i]]++;
//         }
//         for(int i=0;i<=size;i++){
//             if(hash_arr[i]==0){
//                 return i;
//             }
//         }
//     }
// Sum Optimal
    // int missingNumber(int arr[],int n){
         
    //     int sum2=n*(n+1)/2;
    //     int sum=0;
    //     for(int i=0;i<n;i++){
    //         sum+=arr[i];
    //     }
    //     return sum2-sum;
    // }
// XOR OPTIMAL
int missingNumber(int arr[],int n){
    
     int xor1=0;
     int xor2=0;
     
     for (int i = 0; i < n; i++)
     {
       xor2^=arr[i];
       xor1^=i;
     }
     xor1^=n;
     return xor1^xor2;
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