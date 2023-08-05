#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>

using namespace std;

void merging(int a[],int l,int m,int h)
{
    int i,j,k=l;
    i=l;j=m+1;
    int temp[1000];
    while(i<=m && j<=h)
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=m)
    {
        temp[k++]=a[i++];
    }
    while(j<=h)
    {
        temp[k++]=a[j++];
    }
    for(i=l;i<=h;i++)
    {
        a[i]=temp[i];
    }
}

void merge_sort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merging(a,l,mid,h);
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
    cout<<"\nAnswer :"<<endl;
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

