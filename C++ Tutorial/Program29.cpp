#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x)
    {
        a = x;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex()
    {
        a = 0;
        b = 0;
    }

    void printnumber()
    {
        cout << "The value of a is " << a << " and b is " << b << endl;
    }
};

int main()
{

    complex c1;
    c1.printnumber();

    complex c2(1, 2);
    c2.printnumber();

    complex c3(5);
    c3.printnumber();
}