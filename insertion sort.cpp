#include<iostream>
using namespace std;

int main()
{
    int i,j,b,k,t;
    int a[10];
    cout<<"Insert numbers:";
    for(j=0;j<5;j++)
    {
        cin>>a[j];
    }
    cout<<endl;
    for(i=1;i<5;i++)
    {
        t=a[i];
        j=i-1;
        while((t<a[j])&& j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=t;
    }
    cout<<"The sorted elements are: ";

    for(j=0;j<5;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;

    return 0;
}

