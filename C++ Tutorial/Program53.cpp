#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //   ofstream out;
    //   out.open("output.txt");
    //   out<<"This is a return content"<<endl;
    //   out<<"This is another return content"<<endl;
    //   out.close()
    
    
    string str;
    ifstream in;
    in.open("input.txt");
    // in>>str;
    while (in.eof()!=1)//==0
    {
        getline(in,str);
    } 
    cout<<str;
    in.close();
    
}