#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 1;
    }
    void getprice(void);
    void displayprice(void);
};

void shop::getprice(void)
{
    cout << "enter id of your item no " << counter << endl;
    cin >> itemid[counter];
    cout << "enter price of your item no " << counter << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.displayprice();
}