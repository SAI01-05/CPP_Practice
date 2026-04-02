#include<iostream>
using namespace std;

//fibonacci series
int fib(int sai)
{
    if (sai<2)
    {
        return 1;
    }
    return fib(sai-1)+fib(sai-2);
}



//factorial:
    // factorial(4)= 4 *factorial(3)
    //   factorial(4)= 4 * 3* factorial(2)
    //  factorial(4)= 4 * 3* 2* factoriasl(1)
    //  factorial(4)= 4 * 3* 2* 1 =24 

// int factorial(int num)
// {
//   if (num<=1)                               
//     {
//         return 1;
//     }
//     return num* factorial(num-1);
// }

int main() 
{   //factorial
    // int num;
    // cout<<"Enter the number you want factorial of "<<endl;
    // cin>>num;
    // cout<<"The factorial of "<<num <<" is "<<factorial(num);



//Fibonacci series
    int sai;      //1,1,2,3,5,8,13,21,34,55,89,144,233,377
    cout<<"Enter the number of fibonacci series position you want "<<endl;
    cin>>sai;
    cout<<"The value at position "<<sai<<" in fibonacci series is "<<fib(sai);

}