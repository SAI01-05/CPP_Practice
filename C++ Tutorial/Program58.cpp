#include<iostream>
using namespace std;
    //  MEMBER FUNCTION TEMPLATE
// template<class t>
// class base
// {
//     public:
//     t data1;
//     base(t a)
//     {
//         data1=a;
//     }
//     void display();
// };

// template<class t>
// void base<t>::display()
// {
//     cout<<data1;
// }



//OVERLOADING TEMPLATE FUNCTION
void print(int a)
{
    cout<<"i an normal function "<<a<<endl;

}

template<class t>
void print(t a)
{
    cout<<"i an template function "<<a<<endl;
}

int main()
{
    //  MEMBER FUNCTION TEMPLATE
    //   base<int> b1(10);
    //   b1.display();

    //OVERLOADING TEMPLATE FUNCTION
    print(10.5);

      return 0;
}