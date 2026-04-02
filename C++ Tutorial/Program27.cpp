#include<iostream>
// Constructors in c++

using namespace std;

class sai
{
      int a,b;

      public:
             sai();   //Constructor Declaration

             void printnumber()
             {
                  cout<<"Your number is "<<a<< "+ "<<b<<"i"<<endl;
             }
};

//Constructor initialized

sai::sai(void)              //This is a default constructor bcz it takes no parameter's.
{
      a=50;
      b=60;
}



int main()
{
      sai s1,s2,s3;   //Ya mul constructor automatically run hoil karan same name ahe 
      s1.printnumber();
      s2.printnumber();
      s3.printnumber();
}