#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,count;
    int a[1000],b[1000];
    while(cin>>n)
    {
        j=0;count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
             if(a[i]==1 && (i-1==1) )
            {
                count++;
                b[j]=a[i-1];
                j++;

            }
            else if(a[i]==1 && i!=0)
            {
                b[j]=a[i-1];
                count++;
                j++;
            }
            if(i==(n-1))
            {
                count++;
                b[j]=a[i];
                j++;
            }

        }
        cout<<count<<endl;
        for(k=0;k<j;k++)
        {
            cout<<b[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

