#include <iostream>
using namespace std;

int globalChaiStock = 100;  // Global variable

void serveChai() {
  int localCups = 5;  // Local variable
  cout << "Serving " << localCups << " cups from " << globalChaiStock << " total stock." << endl;
}

int main() {
  serveChai();
  cout << "Global chai stock after serving: " << globalChaiStock << endl;
  return 0;
}