#include <iostream>
using namespace std;

void printFibonacci(int a, int b, int limit) {
    if (a > limit) return;
    cout << a << " ";
    printFibonacci(b, a + b, limit);
}

int main() {
    int limit;
    cout << "Enter the limit for the Fibonacci series: ";
    cin >> limit;

    cout << "Fibonacci series up to " << limit << ": ";
    printFibonacci(0, 1, limit);
    cout << endl;

    return 0;
}