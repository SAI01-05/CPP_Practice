#include<iostream>
using namespace std;


class Test
{
    private:
     int virat,rohit;
    public:
     Test(int i,int j):virat(i)
     {
        rohit=j;
        cout<<"Virat: "<<virat<<endl;
        cout<<"Rohit: "<<rohit<<endl;
     }

};
int main()
{
      Test  t1(10,20);
      return 0;
}