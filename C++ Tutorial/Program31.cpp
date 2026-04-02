#include<iostream>
using namespace std;

class bankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        bankDeposit(){}
        bankDeposit( int p,int y,float r);
        bankDeposit(int p,int y,int r);

        void show();
        
};
// bankDeposit::bankDeposit()
// {
        //He kra naitr public madhech {} open krun dya
// }

bankDeposit::bankDeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    // OR
    //  returnValue=principal*(1+(interestRate*years));
    for (int i = 0; i < years; i++)
    {
        returnValue=returnValue*(1+interestRate);
    }
}


bankDeposit::bankDeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    // OR
    //  returnValue=principal*(1+(interestRate*years));
    for (int i = 0; i < years; i++)
    {
        returnValue=returnValue*(1+interestRate);
    }  
}

 void bankDeposit::show()
 {
    cout<<"The amount you get after "<<years<<" years is "<<returnValue<<endl;
 }

int main()
{
      bankDeposit bd1,bd2;
      int p,y,R;
      float r;

    cout<<"Enter the value of principal,years & interestRate"<<endl;
    cin>>p>>y>>r;
    bd1=bankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of principal,years & interestRate"<<endl;
    cin>>p>>y>>R;
    bd2=bankDeposit(p,y,R);
    bd2.show();
     
} 