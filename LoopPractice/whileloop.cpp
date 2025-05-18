#include<iostream>
using namespace std;
int main()
{
    int teacups;
     cout<<"Enter a number of teacups serve:";
     cin>>teacups;

     while(teacups >0)
     {
         cout<<"serving a tea of cup \n" <<teacups  << "remaining" <<endl;
         teacups--;

     }
     cout<<"All cups are  served";
}