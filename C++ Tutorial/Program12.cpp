#include<iostream>
using namespace std;

int main() 
{
    int sai[]={11,12,13};
    int *p=sai;         /*Here (&) cannot be used bcz array does not recognize with (& address_of) symbol it recognize with direct names.*/
    cout<<"The value of *p is "<<*(p)<<endl;    /*11*/
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;    /*12*/
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;    /*13*/
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;    /*garbage value*/
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;    /*garbage value*/
}