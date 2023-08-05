#include<iostream>
using namespace std;

int main()
{
    int i,j,b;
    int a[10];
    cout<<"Insert numbers:";
    for(j=0;j<=5;j++)
    {
        cin>>a[j];
    }
    cout<<endl;
    for(int k=0;k<=5;k++){
    for(i=0;i<=5;i++)
    {
        if(a[i]>a[i+1])
            {
            b=a[i];
            a[i]=a[i+1];
            a[i+1]=b;
            }
            else
                a[i]=a[i];
    }
    }

    cout<<"The sorted elements are:";
    for(i=0;i<=5;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}

