#include <iostream>
using namespace std;

int main() {
      string str;
    cout << "Enter a string: ";
    cin >> str;


   int hash[256]={0};
    for (int i = 0; i<str.size(); i++)
    {
        hash[(int)str[i]]+=1;
    }
    
   

    // Input number of queries
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    // Process each query
    while (q > 0) {
        char ch;
        cout << "Enter character to query: ";
        cin >> ch;

        cout << "Frequency of '" << ch << "': " << hash[(int)ch] << endl;

        // Decrease query count
        q = q - 1;
    }

    return 0;
}
