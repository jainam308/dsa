// array maximum size inside main can be 10^6 and outside main is 10^7
//--------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Hash array to count frequency (supports elements 0 to 12)
   map<int,int> mpp;
   for (int i = 0; i < size; i++)
   {
    mpp[arr[i]]++;
   }
   for(auto it:mpp){
    cout <<it.first <<"-> "<<it.second <<endl;
   }
   


    // Input number of queries
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    // Process each query
    while (q > 0) {
        int num;
        cout << "Enter number to query: ";
        cin >> num;

        // Output the frequency
        cout << "Frequency of " << num << ": " << mpp[num] << endl;

        // Decrease query count
        q = q - 1;
    }

    return 0;
}
