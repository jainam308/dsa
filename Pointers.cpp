#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    cout <<ptr;
    cout << &a;
    int** ptr2=&ptr;
    cout <<&ptr;
    cout <<ptr2<<endl;
    cout << *(ptr)<<endl;
    cout << *(ptr2);
    int* ptr3=NULL;
    cout << ptr3;
    return 0;
}