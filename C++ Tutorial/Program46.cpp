#include<iostream>
using namespace std;

class base
{
    private:
        int a;
    public:
        // base &  setData(int a)
        // {
        //   this-> a=a;
        // }
        void  setData(int a)
        {
          this-> a=a;
        }
        void print()
        {
            cout<<"The value of a is "<<a;
        }
};
int main()
{
    base b1;
    // b1.setData(10).print();
   

    b1.setData(10);
    b1.print();
      
      return 0;
}