#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<fstream>
#include<math.h>

using namespace std;

int partition_pivot(int a[],int l,int r)
{
    int pivot=l;
    int i=l,j=r;
    if(i<j){
    while(j>i){
    while(a[i]<=a[pivot])
    {
        i++;
    }
    while(a[j]>a[pivot])
    {
        j--;
    }
        if(j>i-1)
        swap(a[i],a[j]);
    }
        if(j<i)
        swap(a[j],a[pivot]);
        return j;
    }
}



void quick_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int j=partition_pivot(a,l,r);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,r);
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
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

