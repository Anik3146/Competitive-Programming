#include<iostream>
using namespace std;

int main(){

    int m=-1,large=1;
    int i,n;
    cout<<"Enter the numbers :\n";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>m)
            m=a[i];
    }
    for(i=1;i<=m;i++)
    {
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]%i!=0)
                flag++;
        }
        if(flag!=0)
        {
            flag=0;
        }
        else if(i>large)
        {
            large=i;
        }

    }
    cout<<"GCD ="<<large<<endl;
    return 0;
}

