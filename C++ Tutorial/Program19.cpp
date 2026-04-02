#include<iostream>
using namespace std;


class employee
{
private:
    int a,b,c;
public:
    int x,y;

    void privatedata(int a1, int b1, int c1);
    void print()
    {
        cout<<" the value of private a is "<<a<<endl;
        cout<<" the value of private b is "<<b<<endl;
        cout<<" the value of private c is "<<c<<endl;
        cout<<" the value of x is "<<x<<endl;
        cout<<" the value of y is "<<y<<endl;
    }
};
void employee::privatedata (int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}


int main() 
{
    employee sai;
    sai.privatedata(1,2,3);
    sai.x=4;
    sai.y=5;
    sai.print();
}