#include<iostream>
using namespace std;

template<class t1,class t2>
class base
{
    public:
        t1 data1;
        t2 data2;
        base(t1 a,t2 b)  
        {
           data1=a;
           data2=b;
        }
        void show()
        {
            cout<<data1<<endl<<data2<<endl;
        }
};

int main()
{
      base <int ,char> b1(10,'b');
      b1.show();

      return 0;
}