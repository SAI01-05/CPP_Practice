#include<iostream>
#include<math.h>

using namespace std;

class point
{
    int x,y;
    friend void dist(point o1,point o2);
    public:
             point(int a,int b)
            {
                x=a;
                y=b;
            }

            void display()
            {
                cout<<"("<<x<<","<<y<<")"<<endl;
            }
};

void dist(point o1,point o2)
{
   float result;
   result=sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
   cout<<"The distance is "<<result<<endl;

}



int main()
{
    point p(1,0);    //x1,y1
    p.display();     

    point q(70,0);    //x2,y2
    q.display();


    dist(p,q);
    

    
      
}