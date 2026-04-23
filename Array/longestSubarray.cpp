#include <iostream>
#include <vector>

#include <map>
using namespace std;
// optimized brute
// void longestSubarray(vector<int>& arr,int k) {
//     int length=0;
//    for (int i = 0; i < arr.size(); i++)
//    {
//     for (int j = i; j < arr.size(); j++)
//     {
//         int sum=0;
//         sum+=arr[j];
//         if(sum==k){
//             length=max(length,j-i+1);
//         } 
//     }  
//    }
//     cout <<" max length is" << length;
   
// }
// better for postive and negatives!!!!!!!
// void longestSubarray(vector<int>& arr,int k) {
  
//     map<int, int> prefix_summap;
//     int sum=0;
//     int max_len=0;
    
//     for (int i = 0; i < arr.size(); i++)
//     {
//        sum+=arr[i];
//          //case 1 check sum itself is equal to k
//     if(sum==k){
//         max_len=i+1;
//     }
//      int rem=sum-k;
//     if (prefix_summap.find(rem)!= prefix_summap.end()){
//         int len=i-prefix_summap[rem];
//         max_len=max(max_len,len);
//     }
//     // store prefix sum
//     if (prefix_summap.find(sum)==prefix_summap.end())
//     {
//          prefix_summap[sum]=i;
//     }
     
   
//     }
//    cout << "max length is" << max_len;

   
//  }
 //optimal but only for positves!!!!!
 void longestSubarray(vector<int>& arr,int k) {
    int j=0;
    int sum=0;
    int length=0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum+=arr[i];
        while (sum > k)
        {
            sum-=arr[j];
           j++;
        }
       if (sum == k)
        {
            length=max(length,i-j+1);
        }
    }
    cout << " max length is" << length;
 }

int main() {
    int size, k;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter element to find: ";
    cin >> k;

    longestSubarray(arr,k);
    
    return 0;
}
