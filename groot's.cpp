#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i,j,in,pos=1,reduce=0;
    int A[1001];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>k;
            A[j]=k;
        }
        in=A[pos];
    while(pos!=n)
        {
            reduce+=in;
            in=pos+in;
            in=A[pos];

        }
    }


    return 0;
}
