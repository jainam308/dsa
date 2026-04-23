#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Function Template
//brute
// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> result;
//    for (int i = 0; i < nums.size(); i++)
//    {
//         for (int j = i+1; j < nums.size(); j++)
//         {
//            if (target==nums[i]+nums[j])
//            {
//                 result.push_back(i);
//                 result.push_back(j);
//                 return result;
//            }
           
//         }
        
//    }
// }
// better 
vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> numMap;
    
   for (int i = 0; i < nums.size(); i++)
   {
     int need=target-nums[i];
     if (numMap.find(need)!=numMap.end())
     {
        return {numMap[need],i};
     }
     else
     {
        numMap[nums[i]]=i;
     }     
   }
   return {-1,-1};   
}
// Driver Code
int main() {
    int n, target;
    
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if(result.size() == 2) {
        cout << "Indices: " << result[0] << " " << result[1];
    } else {
        cout << "No valid pair found";
    }

    return 0;
}