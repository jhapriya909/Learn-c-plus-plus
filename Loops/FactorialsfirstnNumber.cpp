#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number is:";
    cin>>n;
    int fact=1;
   while(n!=1)
    {
        fact*=n;
    }

    cout<<fact;
   
}