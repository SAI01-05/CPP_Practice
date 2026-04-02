#include<iostream>
using namespace std;

class base
{
    public:
   virtual void display()=0;
};

class derived:public base
{
    public:
    void display()
    {
        cout<<"Derived constructor"<<endl;
    }
};  

int main()
{
    derived d1;
     base *ptr=&d1;
     ptr->display();
      return 0;
}