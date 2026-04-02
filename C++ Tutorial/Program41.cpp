#include <iostream>
using namespace std;

class Base1
{
public:
      Base1()
      {

            cout << "Constructor base1 is called" << endl;
      }
};


class Base2
{

public:
      Base2()
      {

            cout << "Constructor base2 is called" << endl;
      }
};


class derived : public Base1, public  Base2
{

public:
      derived()
      {
            cout << "Constructor of derived class is called" << endl;
      }
};

int main()
{
      derived d1;

      return 0;
}