#include<iostream>
using namespace std;
int main()
{
    bool isstudent;
    int cups;
    cout<<"are you student (1 for yes and 0 is no)?";
    cin>> isstudent;
    cout<<"how many cups of tea you have purchase?";
    cin>>cups;
    if(isstudent || cups>15)
    {
       cout<<"you are eligible for discount?";
    }
    else{
        cout<<"you are not eligible for discount?";
    }

    return 0;

}