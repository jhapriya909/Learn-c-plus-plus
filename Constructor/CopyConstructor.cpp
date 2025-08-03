#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
  string teaName;
  int servings;
  vector<string> ingredient;

  // same class name
  // default constructor
  Chai(string name, int serve, vector<string> ingr)
  {
    teaName = name;
    ingredient =ingr;
    servings = serve;
    cout << " Parameters Constructor Called" << endl;
  }

  void displayChaiDetails()
  {
    cout << "Tea  Name: " << teaName << endl;
    cout << "Servings : " << servings << endl;
    cout << "Ingredients:  ";

    for (string ingredient : ingredient)
    {

      cout << ingredient;
    }
    cout << endl;
  }
};

//object

int main()
{ // jabbhi object bnate hai tvbhi constructor call hota hai
  Chai LemonTea("Lemon Tea", 2 ,{"water", "lemon","Honey"});
 
 LemonTea.displayChaiDetails();

  Chai copiedChai = LemonTea;
  copiedChai.displayChaiDetails();

  LemonTea.teaName = "Modified Tea Name";

  cout<<"Lemon Tea" <<endl;
  LemonTea.displayChaiDetails();
  cout<<"Copied Tea" <<endl;
  copiedChai.displayChaiDetails();

  return 0;
}
