#include<iostream>
using namespace std;
int main()
{
    float teaprice = 50.99;
    int roundedteaprice= (float) teaprice;
    int teaquntity = 3;
    float totalprice = teaquntity * teaprice;
    cout<< totalprice <<endl;
    return 0;
}