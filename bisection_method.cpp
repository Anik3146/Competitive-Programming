#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<math.h>
#define p 0.0001


using namespace std;

double func_x(double x)
{
    return (pow(x,3)-2*x-5);
}

void get_bisection(double a,double b)
{
    if(func_x(a)*func_x(b)>=0)
    {
        cout<<"Wrong range "<<endl;
        return;
    }
    double c;

    while(fabs(b-a)>=p)
    {
        c=(a+b)/2;
    if(func_x(c)==0.0)
        break;
    else if(func_x(c)*func_x(a)>0)
        a=c;
    else
        b=c;
    }
   cout<<setprecision(10)<<"Root :"<<c<<endl;
}

int main()
{
    get_bisection(2,3);
    return 0;
}

