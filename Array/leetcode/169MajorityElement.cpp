#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
//brute
// int majorityElement(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int count=0;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (nums[i]==nums[j])
//             {
//                 count++;
//             }
            
//         }
//         if (count > nums.size()/2)
//         {
//             return nums[i];
//         }
        
        
//         return -1;
//     }
    
       
    // }
    
    




// Function Template better
// int majorityElement(vector<int>& nums) {
//     map<int,int> mpp;
//     for (int i = 0; i <nums.size(); i++)
//     {
//         mpp[nums[i]]++;
//     }
    
//     for (auto it = mpp.begin(); it != mpp.end(); it++)
//     {
//         if (it->second > nums.size()/2)
//         {
//             return it->first;
//         }
//     }
//   return -1;
// }
// optimal solution
int majorityElement(vector<int>& nums) {
     int candidate = 0;
    int count = 0;

    // Step 1: Find candidate
    for(int num=0;num<nums.size();num++) {
        if(count == 0) {
            candidate = num;
        }

        if(num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for(int num=0;num<nums.size();num++) {
        if(num == candidate) {
            count++;
        }
    }

    if(count > nums.size() / 2) {
        return candidate;
    }

    return -1;  // no majority element
}


// Driver Code
int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = majorityElement(nums);

    cout << "Majority Element: " << result;

    return 0;
}