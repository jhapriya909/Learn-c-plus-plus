#include<iostream>
using namespace std;
int main()
{
    int ram,shyam,Ajay;
    cout<<"Enter 1st number :";
    cin>>ram;
    cout<<"Enter 2nd number :";
    cin>>shyam;
    cout<<"Enter 3rd number :";
    cin>>Ajay;

    if(ram<shyam and ram<Ajay)
    {
        cout<<ram<<" is least";
    }
    else if(shyam<ram and shyam<Ajay)
    {
        cout<<shyam<<" is least";
    }
    else{
        cout<<Ajay<<" is  least";
    }
}