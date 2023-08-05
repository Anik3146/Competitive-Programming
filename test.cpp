#include<bits/stdc++.h>
using namespace std;

void reverse_selectionSort(int a[], int n)  
{  
    int i, j, min;  
  
    for (i = 0; i < n-1; i++)  
    {  
         
        min= i;  
        for (j = i+1; j < n; j++) {
        if (a[j] > a[min])  
            min = j; 
		}
        swap(a[min], a[i]);  
    }  
}  

void forward_selectionSort(int a[], int n)  
{  
    int i, j, min;  
  
    for (i = 0; i < n-1; i++)  
    {  
         
        min= i;  
        for (j = i+1; j < n; j++) {
        if (a[j] < a[min])  
            min = j; 
		}
        swap(a[min], a[i]);  
    }  
}  


int main ()
{
	int n,i;
	cout<<"Enter the total number of elements as input :";
	cin>>n;
	int a[n];
	cout<<"Enter the numbers : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	forward_selectionSort(a,n);
	cout<<"The forward sorted numbers are :";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
	reverse_selectionSort(a,n);
	cout<<"The reverse sorted numbers are :";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
    return 0;
}
