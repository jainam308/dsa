#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

// vector<int> findUnion(int arr[], int arr2[], int size) {
//     set<int> s;
//     for (int i = 0; i < size; i++) {
//         s.insert(arr[i]);
//     }
//     for (int i = 0; i < size; i++) {
//         s.insert(arr2[i]);
//     }

//     vector<int> union_arr;
//     for (auto it : s) {
//         union_arr.push_back(it);
//     }

//     return union_arr;
// }
vector<int> findUnion(int arr1[],int arr2[], int size1,int size2){
    vector<int> unionArr;
    int i=0;
    int j=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i]<=arr2[j])
        {
          if (  unionArr.size()==0||unionArr.back()!=arr1[i])
          {
           unionArr.push_back(arr1[i]);
           
          }
          i++;
          
        }
        else{
            if ( unionArr.size()==0 || unionArr.back()!=arr2[j] )
          {
           unionArr.push_back(arr2[j]);
          
          }
           j++;
        }    
    }
    while (i<size1)
    {
       if (unionArr.size()==0||unionArr.back()!=arr1[i])
          {
           unionArr.push_back(arr1[i]);
          
          }
           i++;
    }
    while (j < size2)
    {
       if (unionArr.size()==0||unionArr.back()!=arr2[j])
          {
           unionArr.push_back(arr2[j]);
          
          }  
           j++;
    }
return unionArr;   
}
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

    vector<int> result = findUnion(arr, arr2, size1,size2);
    cout << "Union elements: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] arr2;

    return 0;
}
