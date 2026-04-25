#include <iostream>
#include <vector>
#include<algorithm>>
using namespace std;

// better solution (myway)
// void sortColors(vector<int>& nums) {
    
//         int one=0;
//         int two=0;
//         int zero=0;
//         for (int i = 0; i <nums.size(); i++)
//         {
//             if (nums[i]==0)
//             {
//                zero++;
//             }
//             else if (nums[i]==1)
//             {
//                one++;
//             }
//             else
//             {
//                 two++;
//             }          
//         }
//         int j=0;
//         for (int i = 0; i <zero; i++)
//         {
//             nums[j]=0;
//             j++;
//         }
//         for (int i = 0; i < one; i++)
//         {
//             nums[j]=1;
//             j++;
//         }
//         for (int i = 0; i < two; i++)
//         {
//            nums[j]=2;
//            j++;
//         }   
// }
//optimal
void sortColors(vector<int>& nums){
    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while (mid<=high)
    {
        if (nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if (nums[mid]==1)
        {
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }        
    }
    
}

// Driver Code
int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0, 1, 2): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}