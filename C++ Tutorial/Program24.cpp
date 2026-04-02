#include<iostream>
using namespace std;

class sai
{
    int a,b;

    friend sai sumcomplex(sai o1,sai o2);
    public:
        void setnumber (int n1, int n2)
        {
            a=n1;
            b=n2;
        }

        void printnumber()
        {
            cout<<"Your number is "<<a<<" + "<< b<<"i"<<endl;
        }
};

sai sumcomplex(sai o1,sai o2 )
{
    sai o3;
    o3.setnumber((o1.a + o2.a),(o1.b +o2.b));
    return o3;
}

int main() 
{
    sai sai1,sai2,  viki;
    sai1.setnumber(2,3);
    sai1.printnumber();

    sai2.setnumber(5,6);
    sai2.printnumber();

    viki=sumcomplex(sai1,sai2);
    viki.printnumber();
}