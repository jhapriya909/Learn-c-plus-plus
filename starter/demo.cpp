#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;

    // 'A' is 65
    // 'B' is 97
    // '0' is 98

    if(a>='A' &&  a>='Z')
    {
        cout<<"This is upper case :"<<endl;
    }
    else if(a>='a' && a>='z')
    {
        cout<<"This is lower case:"<<endl;
    }
    else if(a>=0 && a>='9')
    {
        cout<<"This is numeric:"<<endl;
    }
}