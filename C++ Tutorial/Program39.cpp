#include<iostream>
using namespace std;
class base1
{
      public:
      void greet()
      {
            cout<<"The base1 is called"<<endl;
      }
};
class base2
{
      public:
      void greet()
      {
            cout<<"The base2 is called"<<endl;
      }
};

class derived:public base1,public base2
{
      public:
      void greet()
      {
            base1::greet();
      }
};

int main()
{
      derived d1;
      d1.greet();
      return 0;
}