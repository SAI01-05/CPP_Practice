#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
};

class B :virtual public A
{

};

class C : public virtual A
{

};

class D :public B,public C
{
    public:
    void show(int value)
    {
        a=value;
        cout<<a;

    }
};

int main()
{
      D d1;
      d1.show(50);
      return 0;
}