#include<iostream>
using namespace std;
int main()
{
    int cups;
    double pricepercup, totalprice, discountedprice;
    cout<<"enter the numbers of tea cups:";
    cin>>cups;
    cout<<"enter the  price per cups :";
    cin>>pricepercup;
    totalprice = cups * pricepercup;

    // apply discount 5% if total price is abvoe 100
    if( totalprice > 100){
        discountedprice = totalprice - (totalprice * 0.05);
        cout << "Discounted price is: " <<discountedprice <<endl;

    }
    else{
        cout << "Total price is: "<<totalprice <<endl;
    }



}