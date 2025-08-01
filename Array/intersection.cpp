#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;



vector<int> intersection(int arr1[],int arr2[], int size1,int size2){
    vector<int> isArr;
    int i=0;
    int j=0;
    while (i <size1 && j<size2)
    {
       if (arr1[i]<arr2[j])
       {
        i++;
       }
       else if (arr2[j]<arr1[i])
       {
       j++;
       }
       else
       {
        isArr.push_back(arr1[i]);
        i++;
        j++;
       }   
    }
    
    return isArr; 
}
// vector<int> intersection(int arr1[],int arr2[], int size1,int size2){
//     vector<int> isArr;
//     int visArr[size2]={0};
//     for (int i = 0; i < size1; i++)
//     {
//        for (int j = 0; j < size2; j++)
//        {
//         if (arr1[i]==arr2[j]&& visArr[j]==0)
//         {
//             isArr.push_back(arr2[j]);
//             visArr[j]=1;
//             break;
//         }
//         if (arr1[i]<arr2[j])
//         {
//           break;
//         }     
//        }
       
//     }
//     return isArr; 
// }

int main() {
    int size1,size2;
    cout << "Enter number of elements for 1st array: ";
    cin >> size1;
     cout << "Enter number of elements for 2nd array: ";
    cin >> size2;


    int* arr = new int[size1];
    int* arr2 = new int[size2];

    cout << "Enter " << size1 << " elements for first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr[i];
    }

    cout << "Enter " << size2 << " elements for second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    vector<int> result = intersection(arr, arr2, size1,size2);
    cout << "Intersection elements: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] arr2;

    return 0;
}
