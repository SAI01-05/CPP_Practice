#include<iostream>
using namespace std;   

class student
{
      protected:
            int rollno;
      public:
            void rollNo(int a);
};
void student::rollNo(int a)
{
      rollno=a;
}

class exam:public student
{
      protected:
            float physice;
            float maths;
      public:
            void marks(float a,float b);
};
void exam::marks(float a,float b)
{
      physice=a;
      maths=b;
}

class result:public exam
{
      protected:
            float result; 
      public:
            void percentage();   
};
 void result::percentage()
 {
      float per=(physice+maths)/2;
      cout<<"Roll No: "<<rollno <<" You got the "<<per<<"%"<<endl;
 }

int main()
{
      result r;
      r.rollNo(1);
      r.marks(95.2,95);
      r.percentage();
      
      return 0;
}