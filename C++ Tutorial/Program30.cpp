#include<iostream>
using namespace std;

class sai
{
    int a,b,c;
    public:
            sai(){}    //Condition matches nai zali tr ek default banvava lagto 
            sai(int x,int y,int z)
            {
                a=x;
                b=y;
                c=z;
            }

            sai(int x,int y=12)
            {
                a=x;
                b=y;
                //Here c is not declare with value and also not passed so there will be garbage value
               
            }

            void printnumber();
           
          
};

void sai::printnumber()
{
    cout<<"The value of a,b and c is "<< a<<" , "<<b <<" and "<<c <<endl ;        
}


int main()
{
      sai s1(1,2,3);
      s1.printnumber();

      sai s2(11);
      s2.printnumber(); 
  
}