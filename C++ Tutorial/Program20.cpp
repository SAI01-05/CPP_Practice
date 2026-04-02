#include<iostream>
#include<string>
using namespace std;


class Binary 
{   private:
        void check_binary(void);
    string s;

    public:
        void input(void);
        void display(void);
        void ones_complement(void);
        void final_display(void);
};




void Binary:: input(void)
    {
        cout<<"Enter the binary number"<<endl;
        cin>>s;
    }




void Binary:: check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0'  && s.at(i)!='1')    //(at) is include in header file.
        {
            cout<<"Incorrect binary number";
            exit(0);
        }
        
    }
    
}

void Binary::display(void)
{
    check_binary();      //(********) //Function madhe functionncall kela yalach nesting of member function boltat.
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
            cout<<s.at(i); 
    }
    cout<<endl;
    
}

void Binary::ones_complement(void)
{
    cout<<"Displaying 1's complement of given binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
        
    }
    
    
}


void Binary::final_display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
        
    }
    
}



int main() 
{
    Binary sai;
    sai.input();
    // sai.check_binary();   This will throw an error because it is private and i have declare it in display function.
                            //If it is in public then we can call it in main function. 
    sai.display();
    sai.ones_complement();
    sai.final_display();
}