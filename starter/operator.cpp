#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    
    cout<<" a&b" << (a&b) <<endl;
    cout<<" a|b "<< (a|b) <<endl;
    cout<<" a^b"<< (a^b) <<endl;

    cout << (17>>1) <<endl;
    cout << (18>>1) <<endl;
    cout << (19<<2)  <<endl;
    cout << (19<<1)  <<endl;

    int i = 7;
    cout<< (i++) <<endl;
    // 8
    cout << (++i) <<endl;
    // 8  ,i = 9
    cout << (i--) <<endl;
    // 9 ,  i = 8
    cout << (--i) <<endl;
    // 7 , 8

}