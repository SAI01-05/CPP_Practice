#include<iostream>
using namespace std;

// Pointers in c++  (Data type which holds the address of other data types)
int main() 
{
    int a=2;
    int *b=&a;

    // For address we use (&) Operator....(&)--->(Address of) operartor
    cout<<"The address of A is "<<&a<<endl;
    cout<<"The address of A is "<<b<<endl;

    // For value of variable we use(*)....(*)--->(Value of) operator
    cout<<"The value of a stored in b is "<<*b<<endl;
    

    // Pointers to pointers
    int** c=&b;
    cout<<"The address of b stored in c is: "<<c<<endl;
    cout<<"The address of b stored in c is: "<<&b<<endl;
    cout<<"The value of b stored in c is: "<<*b<<endl;
    cout<<"The value of b stored in c is: "<<*c<<endl;

}