#include<iostream>
using namespace std;

int main()
{
    int i,count=0,j,sum=0;
    long long int a[1000000000];
    long long int T,n;
    cin>>n>>T;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    int p,q;
    p=T/sum;
    count=p*n;
    T=T%sum;
    for(i=0;i<n;i++)
    {
        if(T>=a[i])
            count++;
    }

        cout<<count<<endl;
    return 0;
}

