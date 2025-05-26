#include<iostream>
using namespace std;
int main(){
    int num, first = 0,second = 1 ,next;
    cout<<"Enter the number  to be printed  Fibonacci Series"<<endl;
    cin>>num;
    cout<<"Fibonacci Series:";

    for( int i = 0; i<num; i++){

        cout<<first <<endl;
        next = first + second;
        first = second;
        second = next;

    }

}