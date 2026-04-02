#include<iostream>
#include<list>
using namespace std;

void display(list<int>& l1)
{
    list<int>::iterator iter;
    iter=l1.begin();
    for (iter; iter!= l1.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}

int main()
{
      list<int> l1;
    //   l1.push_back(10);
    //   l1.push_back(20);
    //   l1.push_back(30);
    //   display(l1);
    //   l1.push_front(555);
    //   display(l1);
     cout<<"Enter the element you want to store in the list: ";
        int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            int x;
            cout<<"Enter the element: ";
            cin>>x;
            l1.push_back(x);
        }
        display(l1);
        l1.pop_back();
        display(l1);
        l1.pop_front();
        display(l1);
        l1.push_front(1000);
        display(l1);
      
      return 0;
}