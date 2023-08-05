#include<iostream>
#include <stdio.h>

using namespace std;
int a[100];
int b[100];

void merge_now(int left,int mid,int right)
{
    int left_key,right_key,index;
    for(left_key=left,right_key=mid+1,index=left;left_key<=mid && right_key<=right;index++)
    {
        if(a[left_key]<a[right_key])
        b[index]=a[left_key++];
        else
        b[index]=a[right_key++];
    }
    while(left_key<=mid)
        b[index++]=a[left_key++];
    while(right_key<=right)
        b[index++]=a[right_key++];
    for(int i=0;i<=right;i++)
    {
        a[i]=b[i];
    }
}

void sort_before_merge(int start,int finish)
{
    int mid;
    if(start<finish)
    {
        mid=(start+finish)/2;
        sort_before_merge(start,mid);
        sort_before_merge(mid+1,finish);
        merge_now(start,mid,finish);
    }
}

int main() {
    int i,n;
    cout<<"Enter how many elements to merge sort :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort_before_merge(0,n-1);
    cout<<"The sorted elements are :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

