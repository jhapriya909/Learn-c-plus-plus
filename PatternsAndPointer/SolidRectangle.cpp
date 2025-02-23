#include<iostream>
using namespace std;
int main()
{
    //rectangle bna hai 
    // row -> m , col ->5
    int m;
    cout<<"Enter a rows:";
    cin>>m;
    int n;
    cout<<"Enter a cols:";
    cin>>n;

   for(int i = 1; i<=m; i++) // rows=m
   {
    for(int i = 1; i<=n; i++) // cols=n
    {
        cout<<" *";
    }
       cout<<endl;
   }
  
}