#include<iostream>
using namespace std;

int* prepareChaiOrders(int cups){
    int* Orders = new int[cups];
    for(int i = 0; i<cups; i++)
    {
        Orders [i] = (i+1)*10;
    }
    return Orders;
}

int main(){
    int cups  = 5; 
    int* ChaiOrders = prepareChaiOrders(cups);
    for(int i = 0; i<cups; i++){
        cout<<"cups:" <<i+1 <<"has" <<ChaiOrders[i] <<"ml /n";
        delete []ChaiOrders;
    }

}