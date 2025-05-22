#include<iostream>
using namespace std;
int main(){
    int chaiSales [3][7] = {
        {50,60,70,80,90,67,87},
          {50,60,70,80,90,67,87},
           {50,60,70,80,90,67,87},
    };

    for(int i = 0; i<3; i++){
        cout<<"I am at shop:" <<i+1 <<"  \n";
        for( int j =0; j<7; j++){
            cout<<chaiSales[i][j]  <<"cups"   <<"  \n";

        }
    }
    return 0;
}