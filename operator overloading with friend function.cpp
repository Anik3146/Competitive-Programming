#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
    int *x;
public:
    A()
    {
        x=new int(0);
    }
    void set_x(int y)
    {
        *x=y;
    }
    void show()
    {
        cout<<*x<<endl;
    }
    friend A operator+(A ob,int a);

    ~A()
    {
        delete x;
        x=NULL;
    }
};
A operator+(A ob,int a)
{
    A temp;
    *(temp.x)=*(ob.x)+a;
    return temp;
}


int main()
{
    A ob1,ob2,ob3;
    ob1.set_x(10);
    ob2.set_x(20);
    ob3=ob1+90;
    ob3.show();
    return 0;
}
//(int*)malloc((sizeof(int))

