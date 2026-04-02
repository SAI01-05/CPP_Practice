#include<iostream>
using namespace std;

//Second example  (ya madhe aapn ek function use krun value's share krun output kadu sakto)
class complex
{
    int a;
    int b;

    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }

        void getdatabysum (complex o1,complex o2)
        {
            a=o1.a + o2.a;  //o1=1  o2=3
            b=o1.b + o2.b;  //o1=2  o2=4
        }

        void printnumber()
        {
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};


//First example
// class employee
// {
//     int id;
//     public:
//     void getid (void)
//     {
//         cout<<"Enter your id"<<endl;
//         cin>>id;
//     }

//     void printid (void)
//     {
//         cout<<"The id is "<<id<<endl;
//     }
// };




int main() 
{

    //First example  
//     employee instagram[4];
// for (int i = 0; i < 4; i++)
// {
//     instagram[i].getid();
//     instagram[i].printid(); 
// }




//Second example  (ya madhe aapn ek function use krun value's share krun output kadu sakto)
    complex sai1,sai2,sai3;
    sai1.setdata(1,2);
    sai1.printnumber();

    sai2.setdata(3,4);
    sai2.printnumber();

    sai3.getdatabysum(sai1,sai2);
    sai3.printnumber();


}