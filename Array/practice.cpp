#include <iostream>
using namespace std;
#include<set>


void unionArray(int arr1[], int n1, int arr2[], int n2, int result[], int &size)
{
     
    
    
}

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int arr1[n1];

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    int arr2[n2];

    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int result[n1 + n2];
    int size = 0;

    unionArray(arr1, n1, arr2, n2, result, size);

    cout << "Union array: ";
    for(int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}