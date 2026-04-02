#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the value of 1st number\n";    /* '<<' This is called as insertion operator */
    cin>>num1;                                  /* '>>' This is called as extraction operator*/

    cout<<"Enter the value of 2nd number\n";
    cin>>num2;

    cout<<"You have enter the 1st value as "<< num1<< " and 2nd value as "<<num2;
    cout<<"\nThe sum of num1 and num2 is "<<num1+num2;
}