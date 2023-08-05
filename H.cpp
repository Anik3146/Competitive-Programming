#include<iostream>
using namespace std;

int main()
{
    int i,n[100000],j,a,sum,max;
    int T;
    cin>>T;
    for(i=0;i<T;i++)
    {
        sum=0;max=-1;
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>n[j];
             if(max<n[j] && (max!=(n[j]+1)))
            {
                max=n[j];
                sum=sum+max;
            }
            else if(max==(n[j]))
            {
            sum+=max;
            }
            else
                sum+=n[j];
            continue;
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }

    return 0;

}

