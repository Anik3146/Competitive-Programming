#include<iostream>
using namespace std;

int main()
{
    int i,j,sum;
    int a[6];
        sum=0;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
        sum+=a[i];

    }
    if(sum%2!=0)
        cout<<"NO"<<endl;
    else
    {
        j=sum/2;
    if((a[0]+a[1]+a[2])==j || (a[0]+a[1]+a[3])==j || (a[0]+a[1]+a[4])==j || (a[0]+a[1]+a[5])==j || (a[0]+a[2]+a[3])==j || (a[0]+a[2]+a[4])==j || (a[0]+a[2]+a[5])==j || (a[0]+a[3]+a[4])==j || (a[0]+a[3]+a[5])==j || (a[0]+a[4]+a[5])==j)
        {
            cout<<"YES"<<endl;
        }
    else
        cout<<"NO"<<endl;
    }

    return 0;
}
