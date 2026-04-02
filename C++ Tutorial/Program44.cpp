#include<iostream>
using namespace std;

class base
{
      private:
            int a;
      public:
            void print(int value)
            {
                  a=value;
                  cout<<"The value of a is "<<a<<endl;
            }
};
int main()
{
     // base *ptr=new base;
                  // OR
      base b1; 
      base * ptr=&b1;
      // ptr->print(10);
      (*ptr).print(10);
      
      return 0;
}