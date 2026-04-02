#include<iostream>
using namespace std;
class base1
{
      protected:
            int data1;
      public:
            void assign1(int a)
            {
                  data1=a;
            }
};

class base2
{
      protected:
            int data2;
      public:
            void assign2(int a)
            {
                  data2=a;
            }
};

class derived : public base1,public base2
{
      public:
            void show()
            {
                  cout<<"The data1 is "<<data1<<" and data2 is "<<data2<<endl;
            }
};

int main()
{
      derived d1;
      d1.assign1(10);
      d1.assign2(50);
      d1.show();
      return 0;
}