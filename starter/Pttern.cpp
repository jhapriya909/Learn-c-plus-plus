#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row =1 , toprint = 1;  

    while(row<=n)
    {
     int col =1;
     while(col<=row)
     {
    cout<< toprint <<"";
    toprint = toprint +1;
    col = col +1;
     }
     cout<<endl;
     row = row +1;
     
    }
}