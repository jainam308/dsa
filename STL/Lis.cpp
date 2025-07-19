#include<iostream>
#include<list>
using namespace std;
int main(){
   
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    
 
  
    for (auto it = l.begin(); it != l.end(); it++)
    {
      cout<<*(it)<<endl;
    }
    
    
}