#include<iostream>
using namespace std;

    int totalChaiServed(int chai[],int size){
        int total = 0;
        for(int i = 0; i<size; i++){
           
              total += chai[i];
        }

       return total;

    }
   

int main(){
    int ChaiServed[7] = {70,80,90,78,90,67,56};

    int total = totalChaiServed(ChaiServed , 7);
    cout<<totalChaiServed;
    return 0;

}