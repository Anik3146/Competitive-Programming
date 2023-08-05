#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

double f(double x)
{
    return (pow(x,3)-(2*x)-5);
}

void regula_falsi(double a,double b)
{
    double x,temp;
    if(f(a)*f(b)>0)
        cout<<"The input range is wrong "<<endl;
    while(fabs(a-b)>=0.0001)
    {
        x=((a*f(b))-(b*f(a)))/(f(b)-f(a));
        temp=a;
        a=x;
        b=temp;
    }
    cout<<a<<endl;
}

int main()
{
    regula_falsi(2,3);
    return 0;
}

