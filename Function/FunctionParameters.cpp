#include <iostream>
using namespace std;

// Function with default parameter
void serveChai(string teaType = "Masala Chai") {
  cout << "Serving " << teaType << endl;
}

int main() {
  serveChai();               // Uses default parameter
  serveChai("Green Chai");    // Uses actual parameter
  return 0;
}