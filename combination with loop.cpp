#include<iostream>
#include<math.h>

using namespace std;

long long int muln=1;
long long int mulr=1;

int ncr(int n,int r)
{
    if(n==r || r==0)
        return 1;
    else if(r==1)
        return n;
    else{
        for(int i=n;i>(n-r);i--)
            muln*=i;
        for(int i=1;i<=r;i++)
            mulr*=i;
        return muln/mulr;

    }
}

int main(){

    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
    return 0;
}

