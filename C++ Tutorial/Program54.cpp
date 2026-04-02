#include <iostream>
using namespace std;

template <class t>
class base
{
      public:
            t * arr;
            t n;
            base(t size)
            {
                  n=size;
                  arr=new int[n];
            }

            t dotProduct(base & b2)
            {
                  t result=0;
                  for (int i = 0; i < n; i++)
                  {
                        result+=arr[i]*b2.arr[i];
                  }
                  return result;   
            }   
};

int main()
{
      base<int> b1(3);
      b1.arr[0]=1;
      b1.arr[1]=2;
      b1.arr[2]=3;

      base<int> b2(3);
      b2.arr[0]=1;
      b2.arr[1]=2;
      b2.arr[2]=3;
      
     int result= b1.dotProduct(b2);
     cout<<result;
}