#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}
int sai(int a, int b, int c)
{
    return a+b+c;
}

//Volume of cube
int volume (int a, int b, int c)
{
    return a*b*c;
}

int main() 
{
    cout<<"The sum of 3 and 5 is "<<sum(3,5)<<endl;
    cout<<"The sum of 3 and 5  and 8 is "<<sai(3,5,8)<<endl;
    cout<<"The volume of  cube 3 and 5 and 8 is "<<volume(3,5,8)<<endl;


}