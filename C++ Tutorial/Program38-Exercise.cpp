#include<iostream>
using namespace std;

class simpleCalculator
{
    protected:
        int a,b;
     public:
        void add(float a,float b)
        {
            cout<<"Using simple calculator ";
            cout<<"a + b= "<<a+b;
        }
        void sub(float a,float b)
        {
            cout<<"Using simple calculator ";
            cout<<"a - b= "<<a-b;
        }
        void mul(float a,float b)
        {
            cout<<"Using simple calculator ";
            cout<<"a * b= "<<a*b;
        }
        void div(float a,float b)
        {
            cout<<"Using simple calculator ";
            cout<<"a / b= "<<a/b;
        }
};
class scientificCalculator
{
    protected:
        int a,b;
    public:
        void SciAdd(float a,float b)
        {
            cout<<"Using scientific calculator ";
            cout<<"a + b= "<<a+b;
        }
        void SciSub(float a,float b)
        {
            cout<<"Using scientific calculator ";
            cout<<"a - b= "<<a-b;
        }
        void SciMul(float a,float b)
        {
            cout<<"Using scientific calculator ";
            cout<<"a * b= "<<a*b;
        }
        void SciDiv(float a,float b)
        {
            cout<<"Using scientific calculator ";
            cout<<"a / b= "<<a/b;
        }
};

class derived:public simpleCalculator,public scientificCalculator
{

};

int main()
{
      derived d1;
      int a,b,choice;
      cout<<"Enter two values"<<endl;
      cin>>a>>b;
      cout<<"Enter the choice you want 1]add 2]sub ,3]mul 4]div"<<endl;
      cin>>choice;
      switch (choice)
      {
      case 1:
        d1.add(a,b);
        d1.SciAdd(a,b);
        break;

      case 2:
        d1.sub(a,b);
        d1.SciSub(a,b);
        break;
      case 3:
        d1.mul(a,b);
        d1.SciMul(a,b);
        break;
      case 4:
        d1.div(a,b);
        d1.SciDiv(a,b);
        break;
      
      default:
      cout<<"wrong choice"<<endl;
        break;
      }

      return 0;
}