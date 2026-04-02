#include<iostream>
using namespace std;

class shop
{
    private:
        int id;
        float price;
    public:
        void setData(int a,float b)
        {
            id=a;
            price=b;
        }
        void getData()
        {
            cout<<"The id is "<<id<<" and price is "<<price<<endl;
        }
};
int main()
{
      shop* ptr=new shop[3];
      shop * tempPtr = ptr;
      int i,a;
      float b;
      for ( i = 0; i < 3; i++)
      {
        cout<<"Enter the information for item no "<<i+1<<endl;
        cout<<"Enter the id and price"<<endl;
        cin>>a>>b;
        ptr->setData(a,b);
        ptr++;
       
      }
      
      for ( i = 0; i < 3; i++)
      {
        tempPtr->getData();
        tempPtr++;
      }
      

      return 0;
}