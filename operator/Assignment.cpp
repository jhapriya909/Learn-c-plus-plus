#include<iostream>
using namespace std;
int main()
{
    int teabags;
    cout << "enter the number of tea bags you have:"<<endl;
    cin>>teabags;
    if(teabags < 10)
    {
        teabags +=5;
    }
    
    cout<<"your total bags are:"<<endl;
    return 0;

}