#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)

void heapifyMinHeap(vector<int>&a, int root)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	return;
	if(a[left] != -1)
	{
		if(a[root]>a[left]){
		swap(a[root],a[left]);
		heapifyMinHeap(a, left);
		}
	}
	if(a[right] != -1)
	{
		if(a[root]>a[right]){
		swap(a[root],a[right]);
		heapifyMinHeap(a, right);
		}
	}

}

void heapifyMaxHeap(vector<int>&a, int root)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	return;
	if(a[left] != -1)
	{
		if(a[root]<a[left]){
		swap(a[root],a[left]);
		heapifyMaxHeap(a, left);
		}
	}
	if(a[right] != -1)
	{
		if(a[root]<a[right]){
		swap(a[root],a[right]);
		heapifyMaxHeap(a, right);
		}
	}

}

void insertMinHeap(vector<int>&a,int root, int x)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	{
		a[root]=x;
	}
	else
	{
		if(a[root]>x)
		swap(x, a[root]);
		if(a[left]==-1)
		insertMinHeap(a, left, x);
		else if(a[right]==-1)
		insertMinHeap(a, right, x);
		else
		{
			if(rand()%2==0)
			insertMinHeap(a, left, x);
			else
			insertMinHeap(a, right, x);
		}
	}
	heapifyMinHeap(a, root);
}

void insertMaxHeap(vector<int>&a,int root, int x)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	{
		a[root]=x;
	}
	else
	{
		if(a[root]<x)
		swap(x, a[root]);
		if(a[left]==-1)
		insertMaxHeap(a, left, x);
		else if(a[right]==-1)
		insertMaxHeap(a, right, x);
		else
		{
			if(rand()%2==0)
			insertMaxHeap(a, left, x);
			else
			insertMaxHeap(a, right, x);
		}
	}
	heapifyMaxHeap(a, root);
}

void deleteMinHeap(vector<int>&a, int root)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	return;
	else if(a[left]==-1 && a[right]==-1)
	{
		a[root]=-1;
	}
	else
	{
		if(a[left]!=-1 && a[right]!=-1)
		{
			if(a[left]<=a[right])
			{
				a[root]=a[left];
				deleteMinHeap(a, left);
			}
			else
			{
				a[root]=a[right];
				deleteMinHeap(a, right);
			}
		}
		else if(a[left]!=-1)
		{
			a[root]=a[left];
			deleteMinHeap(a, left);
		}
		else
		{
			a[root] = a[right];
			deleteMinHeap(a, right);
		}
	}
	heapifyMinHeap(a, root);
}

void deleteMaxHeap(vector<int>&a, int root)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	return;
	else if(a[left]==-1 && a[right]==-1)
	{
		a[root]=-1;
	}
	else
	{
		if(a[left]!=-1 && a[right]!=-1)
		{
			if(a[left]>=a[right])
			{
				a[root]=a[left];
				deleteMaxHeap(a, left);
			}
			else
			{
				a[root]=a[right];
				deleteMaxHeap(a, right);
			}
		}
		else if(a[left]!=-1)
		{
			a[root]=a[left];
			deleteMaxHeap(a, left);
		}
		else
		{
			a[root] = a[right];
			deleteMaxHeap(a, right);
		}
	}
	heapifyMaxHeap(a, root);
}

void traverse(vector<int>&a, int root)
{
	int left = 2*root;
	int right = left + 1;
	if(a[root]==-1)
	return;
	if(a[left]!=-1)
	traverse(a, left);
	cout<<a[root]<<" ";
	if(a[right]!=-1)
	traverse(a,right);
}

void tc()
{
	vector<int> minHeap(101, -1);
	vector<int> maxHeap(101, -1);
	insertMinHeap(minHeap, 1, 10);
	insertMinHeap(minHeap, 1, 12);
	insertMinHeap(minHeap, 1, 13);
	insertMinHeap(minHeap, 1, 22);
	insertMinHeap(minHeap, 1, 14);
	insertMinHeap(minHeap, 1, 3);

	traverse(minHeap, 1);
	cout<<endl;
	deleteMinHeap(minHeap, 1);
	deleteMinHeap(minHeap, 1);
	deleteMinHeap(minHeap, 1);

	traverse(minHeap, 1);
	cout<<endl;
	insertMaxHeap(maxHeap, 1, 10);
	insertMaxHeap(maxHeap, 1, 12);
	insertMaxHeap(maxHeap, 1, 13);
	insertMaxHeap(maxHeap, 1, 22);
	insertMaxHeap(maxHeap, 1, 14);
	insertMaxHeap(maxHeap, 1, 3);

	traverse(maxHeap, 1);
	cout<<endl;
	deleteMaxHeap(maxHeap, 1);
	deleteMaxHeap(maxHeap, 1);
	deleteMaxHeap(maxHeap, 1);

	traverse(maxHeap, 1);

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