#include<iostream>
using namespace std;
int main()
{
    int x=3;
    int* p=&x;   // p,ptr,kuch bhi ho sakta h
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;   // star operator
    cout<<*p<<endl;   //* dereference operator
}