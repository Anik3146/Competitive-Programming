#include<iostream>
using namespace std;

int main()
{
    int a,b,c,p,q,x,ans;
    while(cin>>a>>b>>c)
    {
        if(a>b && a>c)
        {
            x=a;
            p=b;
            q=c;
        }
        else if(b>a && b>c)
        {
            x=b;
            p=a;
            q=c;
        }
        else
        {
            x=c;
            p=a;
            q=b;
        }
        if((p+q)>x)
        {
            cout<<0<<endl;
        }
        else
        {ans=(x+1)-(p+q);
        cout<<ans<<endl;}
    }

    return 0;
}

