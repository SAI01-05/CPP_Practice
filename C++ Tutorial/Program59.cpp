#include<iostream>
#include<vector>
using namespace std;

void display( vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
      vector<int> v1 = {1, 2, 3, 4, 5};
      display(v1);
      // v1.push_back(6);
      // display(v1);
      // v1.pop_back();
      // display(v1);

      vector<int>::iterator iter=v1.begin();
      // v1.insert(iter,0);
      // // display(v1);
      // v1.insert(iter,3,0);
      // display(v1);
      
      return 0;
}