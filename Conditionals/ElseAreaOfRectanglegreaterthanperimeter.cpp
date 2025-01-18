#include<iostream>
using namespace std;
int main()
{
    int len, bre, area, peri;
    cout<<"Enter the length of rectangle :";
    cin>>len;
    cout<<"Enter the breadth of rectangle :";
    cin>>bre;
    
    area=len*bre;
    peri=2*(len * bre);

    if(area>peri)
    {
        cout<<"Yes Area is greater than perimeter:";
    }
    else{
         cout<<"No Area is not greater than perimeter:";
    }
}