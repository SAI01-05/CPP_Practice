#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
        void getdata(void)
        {
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }

        void setdata(void)
        {
            cout<<"The id of this employee is "<<id <<" and this is employee number " <<count<<endl;
        }

        static void getcount (void)
        {
            cout<<"The value of count is "<<count<<endl;
        }
};

int employee::count;

int main() 
{
    employee sai ,viki,om;

    sai.getdata();
    sai.setdata();
    employee::getcount();

    viki.getdata();
    viki.setdata();
    employee::getcount();

    om.getdata();
    om.setdata();
    employee::getcount();

    


}