#include <iostream>
using namespace std;

class base
{
public:
      int a;
      base(int a)
      {
            this->a = a;
      }

       void display()
      {
            cout << "The value of a is " << a << endl;
            cout << "The base class constructor is called" << endl;
      }
};

class derived1 : public base
{
public:
      int b;
      derived1(int value) : base(value-5)
      {
            b = value;
      }
      void display()
      {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The derived1 class constructor is called" << endl;
      }
};
class derived2 : public base
{
public:
      int c;
      derived2(int value) : base(value-5)
      {
            c = value;
      }
      void display()
      {
            cout << "The value of a is " << a << endl;
            cout << "The value of c is " << c << endl;
            cout << "The derived class2  constructor is called" << endl;
      }
};

int main()
{
      derived1 d1(10);
      derived2 d2(20);

      base *arr[2];
      arr[0] = &d1;
      arr[1] = &d2;
      arr[0]->display();
      arr[1]->display();

      return 0;
}