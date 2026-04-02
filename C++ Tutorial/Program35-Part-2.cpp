#include <iostream>
using namespace std;

class base
{

public:
    int data1;
};

class derived : private base
{
public:
    void assignAndPrint(int a);
};

void derived::assignAndPrint(int a)
{
    data1 = a;
    cout << "The data stored is " << data1;
}

int main()
{
    derived d1;
    d1.assignAndPrint(10);
    return 0;
}