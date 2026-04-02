#include<iostream>
using namespace std;

class base
{
    public:
        int baseData;
        void print()
        {
            cout<<baseData<<"base1"<<endl;
        }
};

class derived: public base
{
    public:
        int derivedData;
        void print()
        {
            cout<<baseData<<endl;
            cout<<derivedData<<"base2"<<endl;
        }
};

int main()
{
    // derived d1;
    // base *ptr=&d1;
    // ptr->baseData=10;
    // ptr->print();
    

    // derived d1;
    // derived*ptr=&d1;   -->accepted
    
    //  base b1;
    //  base *ptr=&b1;  -->accepted

    // base b1;
    // derived *ptr=&b1;  -->not accepted
    
    

//    derived *ptr=&d1;



   

      
      return 0;
}