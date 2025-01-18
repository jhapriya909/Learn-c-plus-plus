#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    if(n%5==0 or n%3==0) // or bhi use kr sakty hai ||
    {
        cout<<"divisible by 5 or 3";
    }
   
    else
    { 
        cout<<"not  divisible by 5 or 3";

    }
}