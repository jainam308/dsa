// array maximum size inside main can be 10^6 and outside main is 10^7
//--------------------------------------------------------------------

#include <iostream>
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
    int hash[13] = {0};
    for (int i = 0; i < size; i++) {
        hash[arr[i]] += 1;
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
        cout << "Frequency of " << num << ": " << hash[num] << endl;

        // Decrease query count
        q = q - 1;
    }

    return 0;
}
