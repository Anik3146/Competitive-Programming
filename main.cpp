#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)


void bubblesort(vector<int>&a)
{
	for(int i=0;i<a.size();i++)
	for(int j=0;j<a.size()-1;j++)
	if(a[j]>a[j+1])
	swap(a[j],a[j+1]);
}

void selectionsort(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        int index = i;
        for(int j=i+1; j<a.size();j++)
        {
            if(a[index]>a[j])
            index = j;
        }
        swap(a[index], a[i]);
    }
}

void insertionsort(vector<int>&a)
{
    for(int i=1;i<a.size();i++)
    {
        int key = a[i];
		int j=i-1;
        while(j>=0 && key<a[j])
		{
			swap(a[j],a[j+1]);
			j--;
		}
    }
}


void merge(vector<int>&a, int l, int r)
{
    int m = l + (r-l)/2;
    int n1 = m-l+1;
    int n2 = r-m;
    vector<int> left(n1), right(n2);
    for(int i=0; i<n1; i++) left[i] = a[l+i];
    for(int i=0; i<n2; i++) right[i] = a[m+1+i];
    
    int i=0, j=0, index=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        a[index++]=left[i++];
        else
        a[index++]=right[j++];
    }
    
    while(i<n1) a[index++]=left[i++];
    while(j<n2) a[index++]=right[j++];
    
}

void mergesort(vector<int>&a, int l, int r)
{
    if(l<r){
    int m = l + (r-l)/2;
    mergesort(a, l, m);
    mergesort(a, m+1, r);
    merge(a, l, r);
    }
    // l<r condition is must otherwise infinite (l==r) loop && (l>r) error loop will happen
}


void quicksort(vector<int>&a, int left, int right)
{
    int i=left, j=right;
    int pivot = a[left + (right-left)/2];
    while(i<=j)
    {
        while(a[i]<pivot) // find greater than pivot in left
        i++; 
        while(a[j]>pivot) //find smaller than pivot in right
        j--;
        
        if(i<=j)
        swap(a[i],a[j]); 
        
        i++;
        j--;
    }
    
    if(left < j)
    quicksort(a, left, j);
    if(i < right)
    quicksort(a, i, right);
}

void tc()
{   
	vector<int>a{5,4,3,2,1};
	bubblesort(a);
	for(auto i : a)
	cout<<i<<" ";
	
}

	
int main()
{
	//freopen("blist.in", "r", stdin);
	//freopen("blist.out", "w", stdout);
    IOS
	//ll t; cin>>t; while(t--)
	
 	tc();

    return 0;
}