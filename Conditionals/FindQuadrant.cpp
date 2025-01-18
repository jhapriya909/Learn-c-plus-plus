#include<iostream>
using namespace std;

    void quadrant(int x, int y)
    {
        if(x>0 and y>0)
        
            cout<<"lies in first quadrant";
        

        else if(x<0 and y>0)
        
            cout<<"lies in second quadrant";
        

        else if(x<0 and y<0)
        
            cout<<"lies in third quadrant";
        

        else if(x>0 and y<0)
        
            cout<<"lies in fourth quadrant";
        
        else if(x==0 and y>0)
        

            cout<<"lies at  positive x- axis ";
        

        else if(x==0 and y<0)
        
            cout<<"lies at  negative y- axis ";
        
        else if(y==0 and x>0)
        
           cout<<"lies at  postive  x- axis ";
        

        else
            cout<<"lies at origin";
        


    }
// Driver code 
int main() 
{ 
    int x = 1, y = 1; 
    // Function call 
    quadrant(x, y); 
    return 0; 
} 
