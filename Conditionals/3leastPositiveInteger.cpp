#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<"Enter 3rd number :";
    cin>>c;
    if(a<b and a<c)
    {
        cout<<a<<" is least";
    }
    else if(b<a and b<c)
    {
        cout<<b<<" is least";
    }
    else{
        cout<<c<<" is  least";
    }


    
}