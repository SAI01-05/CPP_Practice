#include<iostream>
using namespace std;

template<class t1=int,class t2=char>
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
            cout<<data1<<endl<<data2;
        }
};

int main()
{
      base<char,float> b1('k',10.5);
      b1.show();
      return 0;
}