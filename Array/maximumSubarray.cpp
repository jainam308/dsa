#include <iostream>
#include <vector>
using namespace std;


void maxSubArray(vector<int>& nums) {
    
    int max_sum = 0;
    int sum = 0;

    int ansstart = 0, ansend = 0, start= 0;
     for (int i = 0; i < nums.size(); i++)
    {
        if (sum==0)
        {
            start=i;
        }
        
        sum +=nums[i];
        if (sum>max_sum)
        {
            max_sum=sum;
            ansstart=start;
            ansend=i;
        }
        
        if (sum<0)
        {
            sum=0;
        }
    }
       

    // Output
    cout << "Maximum Sum: " << max_sum << endl;

    cout << "Subarray: ";
    for (int i = ansstart; i <= ansend; i++) {
        cout << nums[i] << " ";
    }
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

    maxSubArray(nums);

    return 0;
}