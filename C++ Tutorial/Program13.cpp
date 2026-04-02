#include<iostream>
using namespace std;

// typedef struct employee
//     {
//         int id;
//         char fav_char;
//         float salary;
//     }emp;

// union money
// {
//     // Any one can be used
//     int rice;   //4 byte
//     char car;   //1 byte
//     float pounds;  //4 byte  (from above 3 it takes highest byte value and share each other bcz only one can be used at a time. Good for memory  management)
// };



int main() 
{   //structure
    // emp sai;
    // sai.id=1;
    // sai.fav_char='k';
    // sai.salary=23000000000;
    // cout<<"The salary of sai is "<<sai.salary<<endl;
    // cout<<"The fav_char of sai is "<<sai.fav_char<<endl;
    // cout<<"The id of sai is "<<sai.id<<endl;


    //union
    // union  money m1;
    // m1.rice=120;
    // cout<<"The value of rice is "<<m1.rice;
    // But if we use now below lines value then it cannot give correct answer
    // m1.car='b';
    // m1.pounds=12;



    //enums
    // enum meal{breakfast,lunch,dinner};
    // cout<<"The value at breakfast is "<<breakfast<<endl;
    // cout<<"The value at lunch is "<<lunch<<endl;
    // cout<<"The value at dinner is "<<dinner<<endl;
}