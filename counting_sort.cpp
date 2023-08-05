#include<iostream>
#include<math.h>
#include<sstream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){

    int m=-1,c,j=0,n,i;
    int a[100];
    int b[100];
    for(i=0;i<100;i++)
        a[i]=-2;
    cout<<"How many numbers to sort :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        a[c]=c;
        if(c>m)
            m=c;
    }
    for(i=0;i<=m;i++)
    {
        if(i==a[i])
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}

