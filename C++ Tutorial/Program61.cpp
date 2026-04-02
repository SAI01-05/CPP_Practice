#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>  student;
    student["sai"]=40;
    student["ram"]=50;  
    student["kiran"]=60;
   
    
    map<string,int>::iterator iter;
    for (iter=student.begin(); iter!=student.end(); iter++)
    {
    //    cout<<iter->first<<" "<<iter->second<<endl;
       cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
      return 0;
}