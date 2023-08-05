#include<iomanip>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#define p 0.0001
using namespace std;

double f_i(double x)
{
    return (pow(x,3)-(2*x)-5);
}
void secant_method(double Xo,double X_1)
{
    double x1,x2,temp;
    while(fabs(X_1-Xo)>=p)
    {
        x2=X_1-((f_i(X_1)*(X_1-Xo))/(f_i(X_1)-f_i(Xo)));
        temp=X_1;
        X_1=x2;
        Xo=temp;
        cout<<X_1<<endl;
    }

}

int main()
{
    secant_method(2,3);
    return 0;
}

