#include<iostream>
using namespace std;

int main()
{
    int a,b,c,i,n,count=0;
    int x;
    cin>>a>>b>>c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x>b && x<c)
            count++;

    }
    cout<<count<<endl;
    return 0;
}

