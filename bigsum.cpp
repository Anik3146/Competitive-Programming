#include<iostream>
#include<math.h>
using namespace std;

int sum=0;

int bigmod(int a,int b)
{
    if(b==0) return 1;
    else
    {
        int x=bigmod(a,b/2)*bigmod(a,b/2);
        if(b%2==1) x=x*a;
        return x;
    }

}

int bigsum(int a,int b)
{
    if(b==0) return sum;
    else{

        sum+=bigmod(a,b-1);
        bigsum(a,b-1);
    }
}

int main(){

    int a,b;
    cin>>a>>b;
    cout<<bigsum(a,b)<<endl;
    return 0;
}
