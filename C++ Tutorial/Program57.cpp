#include<iostream>
using namespace std;

// template <class t1,class t2>
// float add(t1 a,t2 b)
// {
//     return a+b;
// }

template <class t1>
void swapp(t1 &a,t1 &b)
{
    t1 temp=a;
    a=b;
    b=temp;
}
int main()
{
    //  float result= add(10.55,2);
    //  cout<<result;

    float a=10.1;
    float b=20.1;
    swapp(a,b);
    cout<<a<<b;

      return 0;
}