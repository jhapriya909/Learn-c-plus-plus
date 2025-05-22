#include<iostream>
#include<vector>
using namespace std;

    //CLASS
    class Chai {
        public:
        // data members (attributes)
        string TeaName;    // name of the tea
        int servings;      // number of servings
        vector<string> ingredients;    //  list of ingredients for the tea


        //member functions

        void displaychaidetails(){
            cout<<"Tea  Name: " << TeaName <<endl;
            cout<<"Servings : " << servings <<endl;
            cout<<"Ingredients:  ";

            for(string ingredient:ingredients){

                cout<< ingredient;

            }
            cout<<endl;

        }
    };


    // OBJECT
    int main(){
        Chai chaiOne;
            chaiOne.TeaName = "Green Tea";
           chaiOne.servings = 2;
           chaiOne.ingredients = {"water", "tealeves"};


           chaiOne.displaychaidetails();   // method calling


       Chai chaiTwo;

       chaiTwo.TeaName = "onrange Tea";
       chaiTwo.servings = 4;
       chaiTwo.ingredients = {"water" , "tea leaves" , "sugar" ,"milk"};


       chaiTwo.displaychaidetails();

       return 0;

    
    }

