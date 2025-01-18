#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter coat price";
    cin>>cp;
    int sp;
    cout<<"Enter selling price";
    cin>>sp;
    if(sp>cp)
    {
        cout<<"Profit" <<sp-cp;
    }
    else if(sp<cp)
    {
        cout<<"Loss" <<cp-sp;
    }
    else
    {
        cout<<"No profit no loss";
    }
}