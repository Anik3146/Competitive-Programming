#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,x,a,b,i,j,flag=0,a1[101],b1[101],max_value=-1,min_value=1001;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b)
            {
                a1[i]=a;
                b1[i]=b;
            }
        else
        {
             a1[i]=b;
             b1[i]=a;
        }

    }
    for(i=0;i<n;i++)
    {
        if(a1[i]>max_value)
            max_value=a1[i];
    }
    for(i=0;i<n;i++)
    {
        if(b1[i]<min_value)
            min_value=b1[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a1[i]>b1[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }

    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else if(x>=max_value && x<=min_value)
        cout<<0<<endl;
    else
        {
    if(abs(max_value-x)<abs(min_value-x))
        cout<<abs(max_value-x)<<endl;
    else
        cout<<abs(min_value-x)<<endl;
        }

    return 0;
}

