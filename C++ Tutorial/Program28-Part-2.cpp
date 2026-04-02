#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
            point(int a, int b)
            {
                x=a;
                y=b;
            }

            int  printnumber()
            {
                cout<<"The point's is ("<<x<<" , "<<y<<")"<<endl;
            }
};




int main()
{
      
      point p1(1,0);
      p1.printnumber();

      point p2=point(0,5);
      p2.printnumber();
}