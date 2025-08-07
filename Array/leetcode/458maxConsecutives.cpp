// Brute Solution
#include <iostream>
#include<algorithm>
using namespace std;
int maxOnes(int nums[],int size){
    int count=0;
    int max_count[size+1];
    int max=0;
    int i=0;
        for (int j = 0; j < size; j++)
        {
            if (nums[j]==1)
            {
                count++; 
            }  
            else {
                max_count[i]=count;
                i++;
                count=0;
            }   
    }
    // Handle if array ends with 1s
    max_count[i] = count;
    i++;  // increase i since one more count is added
    for (int k = 0; k < i; k++)
    {
        if (max_count[k]>max)
        {
           max=max_count[k];
        } 
    }
    return max;
    
    
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
          cin >> arr[i];

    }
    int result=maxOnes(arr,size);
      cout << "Most Consecutive ones are"<< result;
   

    delete[] arr; // free memory
    return 0;
}