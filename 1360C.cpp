#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,i,n,t,temp,odd=0,even=0,r[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n],m=100000;
        for(i=0;i<100;i++)
            r[i]=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            r[a[i]%2]++;
        }
        sort(a,a+n);
        i=0;
        while(i<n)
        {
            if((a[i+1]-a[i])==1)
            {
                    r[a[i]%2]--;
                    r[a[i+1]%2]--;
                    i+=2;
            }
            else
                i++;
        }
        int flag=0;
        for(i=0;i<100;i++)
        {
            if(r[i]%2==0 || r[i]==0)
                continue;
            else
                flag=1;
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

