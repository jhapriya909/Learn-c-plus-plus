#include<iostream>
using namespace std;


// Function with default parameter
void servechai(string teaTypes ="Masala chai"){
    cout<<"serveing" <<teaTypes <<endl;
}

int main(){
    servechai();  // Uses default parameter
    servechai("Green tea");  // Uses actual parameter
    return 0;
}