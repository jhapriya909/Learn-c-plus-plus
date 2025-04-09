#include<iostream>

using namespace std;
int main()
{
    int teacups;
   double Pricepercup = 3.2 , totalprice , discount;
   cout<<"enter the number of tea cup"<<endl;
   cin>>teacups;
   totalprice = Pricepercup * teacups;

   if(teacups > 20)
   {
    discount = 0.02;
   }
   else if(teacups >=10 && teacups <=20)
   {
    discount = 0.10;
   }
   else{
   discount = 0;
   }

   totalprice -= (totalprice * discount);
   cout<<"total price  after discount is:"<<totalprice <<endl;
   return 0;
}