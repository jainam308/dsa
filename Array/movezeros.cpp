#include <iostream>
using namespace std;

// void moveZero(int arr[],int size){
//     int count=0;
   
//     int j=0;
//     for (int i = 0; i < size; i++)
//     {
//        if (arr[i]!=0)
//        {
//             arr[j]=arr[i];
//             j++;
//        }
//        else{
//         count++;
//        }      
//     }
//   while (count !=0)
//   {
//     arr[j]=0;
//     j++;
//     count--;
//   }   
// }
//Brute 
// void moveZero(int arr[],int size){
//     int* arr2=new int[size];
//     int j=0;
//     for (int i = 0; i < size; i++)
//     {
//        if (arr[i]!=0)
//        {
//         arr2[j]=arr[i];
//         j++;
//        } 
//     }
//     while (j<size)
//     {
//         arr2[j]=0;
//         j++;
//     }
    
//     for (int i = 0; i <size; i++)
//     {
//        arr[i]=arr2[i];
//     }
// }
//stiver optimal approach
void moveZero(int arr[],int size){
    int j=-1;
    for (int i = 0; i < size; i++)
    {
       if (arr[i]==0)
       {
        j=i;
        break;
       }   
    }
      if (j == -1) return;
    for (int i = j+1; i < size; i++)
    {
       if (arr[i]!=0)
       {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
         j++;  
       } 
       
    }
}
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    moveZero(arr,size);
    for (int i = 0; i <size; i++)
        {
            cout << arr[i];
        }
    

    delete[] arr;
    return 0;
}
