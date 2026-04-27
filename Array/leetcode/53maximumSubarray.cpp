#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Brute
// int maxSubArray(vector<int>& nums) {
   
//     int max_sum=0; 
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int sum=0;
//         for (int j = i; j < nums.size(); j++)
//         {
//             sum+=nums[j];
//             max_sum=max(sum,max_sum);
//         }
        
//     }
    
    
//     return max_sum;   // default return
// }
//Optimal kadane 's algo
int maxSubArray(vector<int>& nums){
    int max_sum=INT_MIN;
    int sum=0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum +=nums[i];
        max_sum=max(sum,max_sum);
        if (sum<0)
        {
            sum=0;
        }
    }
    return max_sum;
    
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

    int result = maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result;

    return 0;
}