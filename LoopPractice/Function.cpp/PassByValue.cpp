#include<iostream>
using namespace std;
  void pourchai(int cups){
    cups = cups+1;
    cout<<"Poured" <<cups  <<"cups of chai!"<<endl;


  }

  int main(){
    int chaicups = 2;
    pourchai (chaicups);
     cout << "Total chai cups outside function: "<<chaicups << endl;
  return 0;
}