#include<iostream>

using namespace std;
int main()
{
    int choice;
    double price;

    cout<<"select your tea \n";
    cout<<"1. Green tea \n";
    cout<<"2. Black tea \n";
    cout<<"3. Oolong tea \n";
    cout<<"enter your choice is number"<<endl;
    cin>>choice;


    switch (choice)
    {
    case 1:
        price = 0.5;
        cout<<"you selected Green Tea price:"<<price<<endl;
        break;

        case 2:
        price = 2;
        cout<<"you selected Black tea price:"<<price<<endl;
        break;

        case 3:
        price =4;
        cout<<"you selected Oolong tea price:"<<price<<endl;
        break;
        
    
    default:
    cout<<"Invalid Choice";
        break;
    }
    
   return 0;
}