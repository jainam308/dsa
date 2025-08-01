
#include <iostream>
#include<algorithm>
#include <set>
using namespace std;
// Brute Solution
// int removeDuplicate(int arr[],int size){
//     set<int> s;
//     for (auto it = 0; it < size; it++)
//     {
//        s.insert(arr[it]);
//     }
//     int count=0;
//   return s.size();
    
    int removeDuplicate(int arr[],int size){
        int i=0;
        for (int j = 0; j < size; j++)
        {
          if (arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
          }      
        }
         return i+1;
        
    }
// }

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++){
           cin >> arr[i];
    }
   int result= removeDuplicate(arr,size);
   cout << "Unique elements are" <<result;
     

   


    delete[] arr; // free memory
    return 0;
}