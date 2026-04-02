#include<iostream>
using namespace std;

class base
{
      //int data1;
      public:
            int data1;
            int data2;
            void setData(int a,int b);
           // int returnValue();
            
            
};
// int base::returnValue()
// {
//       return data1;
// }

void base::setData(int a, int b)
{
      data1=a;
      data2=b;
}

class derived:public base
{     
      
};    





int main()
{
     derived d1;
     d1.setData(10,20);
     cout<<d1.data1<<endl;
    // cout<<d1.returnValue()<<endl;
     cout<<d1.data2;

     
     
    
     
      
      return 0;
}