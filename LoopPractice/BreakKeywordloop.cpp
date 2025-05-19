#include <iostream>
#include <string>
using namespace std;

int main(){
  string teaTypes[3] = {"lemon tea", "Green tea" , "Black tea"};

  for( int i = 0; i<3; i++){
    if(teaTypes[i] == "Green tea"){
        cout<<"Skipping the " << teaTypes[i] <<endl;
        continue;

    }
       cout << "Brewing " << teaTypes[i] << "..." << endl;

  }
}