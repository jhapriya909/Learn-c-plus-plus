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
  // Parameter constructor
  Chai()
  {
    teaName = "Unknown tea";
    ingredient = {"water", "tea"};
    servings = 1;
    cout << " Constructor Called" << endl;
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

int main()
{ // jabbhi object bnate hai tvbhi constructor call hota hai
  Chai defaultChai;

  defaultChai.displayChaiDetails();
  return 0;
}
