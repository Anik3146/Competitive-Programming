#include<iostream>
using namespace std;

int recursion_fibonacci(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return (recursion_fibonacci(n-1)+recursion_fibonacci(n-2));
}

int main()
{
    int n;
    cin>>n;
    int t=n;
    for(int i=0;i<=t;i++)
    {
        n=i;
    cout<<recursion_fibonacci(n)<<" ";
    }
    return 0;
}

