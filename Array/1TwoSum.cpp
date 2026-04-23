#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Function Template (no logic)
bool twoSum(vector<int>& nums, int target) {
    
    sort(nums.begin(),nums.end());
    int left=nums[0];
    int right = nums.size() - 1;

   while(left < right){
    if (left+right== target)
    {
        return true;
    }
    else if(left+right <target){
        left++;
    }
    else{
        right--;
    }
    
   }
     return false; 
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

    if(twoSum(nums, target)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}