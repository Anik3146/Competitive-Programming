#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int T,i,j;
    int C,B,A,a,b,c,answer;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>C>>B>>A;
        b=pow(B,C);
        a=pow(A,b);
        cout<<"Case "<<i+1<<": "<<a<<endl;
    }

    return 0;

}
