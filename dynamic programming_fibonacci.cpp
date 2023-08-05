#include<iostream>
#include <stdio.h>

using namespace std;

int a[1000];

int fibo(int n,int memo[])
{
    if(memo[n]==0)
    {
        if(n==1 || n==0)
        {
            memo[n]=1;
            return memo[n];
        }
        else
        {
            memo[n]=(fibo(n-1,memo)+fibo(n-2,memo));
            return memo[n];
        }
    }
    else{
        return memo[n];
    }
}


int main() {

    int x;
    for(int i=0;i<1000;i++)
    {
        a[i]=0;
    }
    cout<<"Enter the position of a fibonacci number you want to get :"<<endl;
    cin>>x;
    cout<<fibo(x,a)<<endl;
    return 0;
}
