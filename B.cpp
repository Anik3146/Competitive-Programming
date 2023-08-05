#include<iostream>
using namespace std;

int main()
{
    int a[2000],b[2000];
    int c,k,p,q,i=0,m,count1,count2;
    while(cin>>a[i]>>b[i])
    {
        count1=0;count2=0;
        p=(a[i]>b[i]?a[i]:b[i]);
        q=(a[i]>b[i]?b[i]:a[i]);
        m=p-q;
        if(m%2==0)
        {
            c=m/2;
        for(k=1;k<=c;k++)
            count1=count1+k;
        for(k=1;k<=c;k++)
            count2=count2+k;
        }
        else{
            c=(m/2)+1;
        for(k=1;k<=c;k++)
            count1=count1+k;
        for(k=1;k<c;k++)
            count2=count2+k;
        }

        cout<<count1+count2<<endl;
        i++;
    }
    return 0;
}


