#include<iostream>
using namespace std;

int main()
{

    int a[100],b[100];
    int n,j,i,p,q;
    int count[100];
    cin>>n;
    for(j=0;j<n;j++)
    {
        count[j]=0;
       cin>>a[j]>>b[j];
       for(i=a[j];i<=b[j];i++)
       {
           if(i%2!=0)
           {
            count[j]=count[j]+i;
           }
       }
    }
    for(j=0;j<n;j++)
    {
        cout<<"Case"<<" "<<j+1<<": "<<count[j]<<endl;
    }

    return 0;
}

