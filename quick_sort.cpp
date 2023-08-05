#include<iostream>
using namespace std;


void quick_sort(int arr[25],int left,int right)
{
    int pos,pivot,i,j;
    if(left<right){
    pivot=left;
    i=left;
    j=right;
    while(i<j){

    while(arr[pivot]>=arr[i] && i<right)
    {
        i++;
    }
    while(arr[pivot]<arr[j] && j>left)
    {
        j--;
    }
    if(i<j)
    {
        pos=arr[i];
        arr[i]=arr[j];
        arr[j]=pos;
    }
    }
    pos=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=pos;

    quick_sort(arr,left,j-1);
    quick_sort(arr,j+1,right);
    }
}

int main()
{
    int n,arr[25];
    cout<<"Enter the elements to sort :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"The sorted elements are :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}

