#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        int a=4;
        for(int j=1; j<=i; j++)
        {
            cout<<a<< " ";
            a-=1;
        }
        cout<<endl;
    }
}