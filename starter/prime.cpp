#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    
    while(i<n)
    {
     // divide hogya ,not prime
     cout<<"Prime Number";
    

     if(n%i==0)
     {
        cout<<"Not prime" <<endl;
     }
     i=i+1;
    }
}