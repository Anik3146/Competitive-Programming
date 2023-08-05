#include<iostream>
using namespace std;

int main()
{
    int a,b,c,t,n,min;
    cin>>a>>b>>c;
    n=a*c;
    t=(n/b);
    if(t*b>=n)
    cout<<(n/b)-c<<endl;
    else
    cout<<((n/b)+1)-c<<endl;
    return 0;
}

