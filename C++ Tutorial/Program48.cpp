#include <iostream>
using namespace std;
class base
{
public:
   virtual void print()
    {
        cout << "Hello base";
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout << "Hello derived";
    }
};

int main()
{
    derived d1;
    base*ptr=&d1;
    ptr->print();
    return 0;
}