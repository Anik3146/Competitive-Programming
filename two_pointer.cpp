#include <bits/stdc++.h>
using namespace std;

bool has_pair_sum(int a[],int n,int sum)
{
    int i=0,j=n-1;
    while(i<j){
    for(i=0;i<j;i++)
    {
        if(a[i]+a[j]==sum)
            return 1;
    }
        j--;
        i=0;
    }
    return 0;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    if(has_pair_sum(a,n,3)==true)// O(n^2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

