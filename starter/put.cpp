#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;

     while(row <= n)
     {
        int space=n-1;
         while(space)
         {
            // space print karlo
            cout<<"";
            space = space-1;
         }\

         // starts print karlo
         int col=1;
         while(col <=row)
         {
            cout<<"*";
            col = col+1;
         }
         cout<<endl;
         row = row + 1;
    }
}