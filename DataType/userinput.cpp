#include<iostream>
#include<string>
using namespace std;
int main()
{
    string usertea;
    int teaquality;
    cout<< "what would you like to order tea? \n";
    getline(cin, usertea);

    // ask for quantity
    cout<<"how many cups of tea"<<usertea <<"would you like to have";
    cin>>teaquality;
    cout<<teaquality;
    cout<<usertea;
    return 0;
}