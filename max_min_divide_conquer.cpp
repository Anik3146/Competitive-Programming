#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>

using namespace std;

int max0,min0;


void max_min(int a[],int l,int r)
{
    if(l==r){
            if(max0<=a[l])
                max0=a[l];
            if(min0>=a[l])
                min0=a[l];
    }
    else if(r==l+1)
    {
        if(a[l]<=a[r]){
            if(min0>a[l])
                min0=a[l];
        }
        else if(a[l]>a[r]){
            if(min0>a[r])
                min0=a[r];
        }
        if(a[l]<=a[r]){
            if(max0<a[r])
                max0=a[r];
        }
        else if(a[l]>a[r]){
            if(max0<a[l])
                max0=a[l];
        }

    }
    else
    {
        int mid=(l+r)/2;
        max_min(a,l,mid);
        max_min(a,mid+1,r);
    }
}


int main()
{

    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    max0=min0=a[0];
    cout<<"\nAnswer :"<<endl;
    max_min(a,0,n-1);
    cout<<"Max :"<<max0<<endl;
    cout<<"Min :"<<min0<<endl;

    return 0;
}

