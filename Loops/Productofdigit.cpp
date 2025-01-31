#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
   int sumEven=2;
    while(n%2==0)
    {
       sumEven += n % 10; 
    }
    cout<<"sum of even number";
    
}
