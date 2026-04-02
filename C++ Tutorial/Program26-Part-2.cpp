#include<iostream>
using namespace std;
class viki;

class sai
{
    int data1;
        friend int exchange(sai & s1,viki & v1);
        public:
            void getdata(int num)
            {
                data1=num;
            }
            void display(void)
            {
                cout<<data1<<endl;
            }
           
};

class viki
{
    int data2;
        friend int exchange(sai & s1,viki & v1);
        public:
            void getdata(int num)
            {
                data2=num;
            }
            void display(void)
            {
                cout<<data2<<endl;
            }
           
};


int exchange(sai & s1,viki & v1)
{
    int temp=s1.data1;
    s1.data1=v1.data2;
    v1.data2=temp;

}



int main()
{
    sai s1;
    s1.getdata(50);
    s1.display();

    viki v1;
    v1.getdata(100  );
    v1.display();

    exchange(s1,v1);

    cout<<"After exchange we get values"<<endl;
    
    s1.display();
    v1.display();



      
      return 0;
}