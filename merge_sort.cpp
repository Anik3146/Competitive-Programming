#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>

using namespace std;

void merge_sort(int a[],int l,int m,int r)
{
    int l_n,r_n;
    l_n=m-l+1;
    r_n=r-m;
    int left[l_n],right[r_n],i;
    for(i=0;i<l_n;i++)
    {
        left[i]=a[l+i];
    }
    for(i=0;i<r_n;i++)
    {
        left[i]=a[m+1+i];
    }
    int k,j=0;
    for(k=0;i<l_n&&j<r_n;k++);
    {
        if(left[i]<right[j])
        {
            a[k]=left[i++];
        }
        else
            a[k]=right[j++];
    }
    while(i<l_n)
    {
        a[k++]=left[i++];
    }
    while(j<r_n)
    {
        a[k++]=right[j++];
    }
}

void merging(int a[],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r-1)/2;
        merging(a,l,m);
        merging(a,m+1,r);
        merge_sort(a,l,m,r);
    }
}

int main()
{
    int a[1000],i,l,r;
    cout<<"Enter the number of inputs to sort :"<<endl;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=0;r=n-1;
    merging(a,l,r);
    cout<<"After sorting by merge_sort algorithm we get :";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
