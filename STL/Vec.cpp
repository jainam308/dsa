#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    // vector<int> vec;
    // cout <<vec.size()<<endl;
    // vec.push_back(2);
    //  vec.push_back(3); 
    //  vec.push_back(4);
    //   vec.push_back(4);
    //  vec.pop_back();
    // //  vec.erase(vec.begin(),vec.begin()+2);
    // vec.insert(vec.begin()+2,40);
    //  for(int val:vec){
    //     cout << val <<endl;
    //  }
    //  cout<<"At index 0";
    //  cout<<vec[0];
    vector<int> vec={1,2,4,5,1,7};
    cout <<*(vec.begin());
    //last ele
    cout <<*(vec.end()-1);
  
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
      cout<<*(it)<<endl;
    }
    sort(vec.begin(),vec.end());
      for (auto it = vec.begin(); it != vec.end(); it++)
    {
      cout<<*(it)<<endl;
    }
    
}