#include <iostream>
using namespace std;

int count = 0;
class sai
{
public:
    sai()
    {
        count++;
        cout << "Constructor for object number:" << count << endl;
    }


    //Destructor never takes an arguments nor does it return any value
    ~sai()
    {

        cout << "Destructor for object number:" << count << endl;
        --count;
    }
};

int main()
{
    sai s1;
    {
        cout << "We are inside the main function and we are creating two more object" << endl;
        sai s2, s3;
        cout << "Now there is no use of constructor in the block so from here the destructor will start" << endl;
    }
    cout << "End" << endl;
}