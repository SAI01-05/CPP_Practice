#include<iostream>

using namespace std;

class viki
{
    int a,b;

    public:
             viki(int,int);

             void printoutput()
             {
                cout<<"The value of a is "<<a<<" and the b is "<<b<<endl;
             }

            
};

 viki::viki(int x,int y)   //This is a parameterized constructor as it takes 2 parameters
{
    a=x;
    b=y;
}

 


int main()
{
    // Step 1 of calling a function
    // implicit call
     viki v1(5,4); 
     v1.printoutput();

    // Step 2 of calling a function
    // Explicit call
    viki v2=viki(3,7);
    v2.printoutput();

      
}