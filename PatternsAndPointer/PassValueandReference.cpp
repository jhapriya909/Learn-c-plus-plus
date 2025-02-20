#include<iostream>
using namespace std;
void swap(int& x,int& y )   // pass by using reference 
{
    int temp = x;
    x= y;
    y=temp;
}
int main()
{
    int x = 16;
    int y = 56;
    cout<<x<<" " <<y<<endl;
    swap(x,y);
    cout<<x<<" " <<y<<endl;
}