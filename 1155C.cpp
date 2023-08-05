#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long long int n,m,i,j,k=1,c=1,y,ma=-1,temp,flag=0,start;
    cin>>n>>m;
    long long int x[n+1];
    long long int p[m+1];
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>p[i];
    }

    y=x[1];
    ma=x[n];
    for(i=1;i<=m;i++)
    {
        temp=y;
        start=1;
        while(temp<=ma){
               temp=y+k*p[i];

        for(j=start;j<=n;j++)
        {
                if(temp==x[j])
                    {
                        c++;
                        start=j;
                        break;
                    }
        }
            k++;
        }
        if(c==n)
            {
                cout<<"YES"<<endl;
                cout<<y<<" "<<i<<endl;
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

