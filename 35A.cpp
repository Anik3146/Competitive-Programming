#include<iostream>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int fixed,a,b;
    while(cin>>fixed){
    for(int i=1;i<=3;i++)
    {
        cin>>a>>b;
        if(a==fixed || b==fixed)
        {
            if(a==fixed)
                fixed=b;
            else
                fixed=a;
        }
    }
    cout<<fixed<<endl;
    }
    return 0;
}
