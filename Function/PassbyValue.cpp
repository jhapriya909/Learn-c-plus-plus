#include <iostream>
using namespace std;

void pourChai(int cups) {
  cups = cups + 1;  // Modifies local copy
  cout << "Poured " << cups << " cups of chai!" << endl;
}

int main() {
  int chaiCups = 2;
  pourChai(chaiCups);  // Passing by value
  cout << "Total chai cups outside function: " << chaiCups << endl;
  return 0;
}