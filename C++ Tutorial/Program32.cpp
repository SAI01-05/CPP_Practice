#include <iostream>
using namespace std;

class number
{
      int a;

public:
      number()
      {
            a=0;
      }
      number(int num)
      {
            a = num;
      }

      void display()
      {
            cout<<"The value for object is "<<a<<endl;
      }



      number(number &obj)
      {
            cout<<"htdhgfgh";
            a=obj.a;               //When there is no copy constructor then compilor provide it's own copy-constructor.
      }
};

int main() 
{
      number x,y,z(5),p;
      x.display();
      y.display();
      z.display();

      // Kevha invoked hoil ani kevha nai honar 

      number x1(x);    //hoil
      x1.display();

      number y1(y);     //hoil
      y1.display();  

      number z1(z);     //hoil
      z1.display();  

      p=2;              //According to video nai hot pn may be due to updates its changed
      p.display();



}       
