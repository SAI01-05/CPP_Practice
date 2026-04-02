#include <iostream>
using namespace std;
class employee
{
public:
      int id;
      float salary;

      employee(){}
      employee(int eid)
      {
             id=eid;
      }
};

class programmer:public employee
{
 public:
      int languagecode=10;
      programmer(int pid ,float Psalary)
      {
            id=pid;
            salary= Psalary;
      }

    //  if visibility mode is private
      // void data()
      // {
      //       cout<<languagecode;
      //       cout<<id;
      // }
};

int main()
{
      employee sai(1);
      cout<<sai.id<<endl;

      programmer viki(2,2.857);
      // if visibility mode is private
      // viki.data();

      cout<<viki.languagecode<<endl;
      cout<<viki.id<<endl;
      cout<<viki.salary;
      return 0;
}