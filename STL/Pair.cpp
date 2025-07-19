#include<iostream>
#include<utility>
using namespace std;
int main(){
   
    pair<int,string> p={1,"jainam"};
    cout <<p.first;
    cout<<p.second;
    pair<int, string> students = {
        {1, "Amit"},
        {2, "Rita"},
        {3, "Sam"}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Roll: " << students[i].first << ", Name: " << students[i].second << endl;
    }
    
    
}