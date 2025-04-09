#include<iostream>
#include<string>
using namespace std;
int main()
{
    // /n next line me print hoga or /t bagal me hoga
    string favouratetea = "orange tea \a";
    string description = "known as \"best\" tea";   // \"best\" tea"; "best" hoga
    cout <<favouratetea <<description <<endl;
    return 0;
}