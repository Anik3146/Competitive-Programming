#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long long int n,m,i,j,k=1,c=1,y,ma=-1,temp,flag=0;
    cin>>n>>m;
    long long int x[n];
    long long int p[m];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>p[i];
    }

    y=x[0];
    ma=x[n-1];
    for(i=0;i<m;i++)
    {
        temp=y;

        while(temp<=ma){
               temp=y+k*p[i];

        for(j=0;j<n;j++)
        {
                if(temp==x[j])
                    c++;
        }
            k++;
        }
        if(c==n)
            {
                cout<<"YES"<<endl;
                cout<<y<<" "<<p[i]<<endl;
                flag=0;
                break;
            }
        else{
            c=1;
            flag=1;
            k=1;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;

    return 0;
}

