#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)

void insertTree(vector<int>&tree, int root, int x)
{
	// 2*root for smaller
	// 2*root + 1 for greater equal
	int left = 2*root;
	int right = left + 1;
    if(root>=tree.size())
    return;
	if(tree[root]==-1)
	{
		tree[root]=x;
	}
	else
	{
		if(x<tree[root])
		insertTree(tree, left, x);
		else
		insertTree(tree, right, x);
	}
}

int minValue(vector<int>&tree, int root)
{
	int left = 2*root;
    if(root>=tree.size())
    return -1;
	if(tree[left]==-1)
	return tree[root];
	else
	return minValue(tree, left);
}

int maxValue(vector<int>&tree, int root)
{
	int left = 2*root;
	int right = left+1;
    if(root>=tree.size())
    return -1;
	if(tree[right]==-1)
	return tree[root];
	else
	return maxValue(tree, right);
}

void deleteTree(vector<int>&tree, int root, int x)
{
	int left = 2*root;
	int right = left + 1;
    if(root>=tree.size())
    return;
	if(tree[root] == x)
	{
		if(tree[left]==-1 && tree[right]==-1)
		tree[root]=-1;
		else if(tree[left]==-1)
		{
			int val = minValue(tree, right);
			tree[root] = val;
			deleteTree(tree, right, val);
		}
		else if(tree[right]==-1)
		{
			int val = maxValue(tree, left);
			tree[root] = val;
			deleteTree(tree, left, val);
		}
		else
		{
			int val = minValue(tree, right);
			tree[root] = val;
			deleteTree(tree, right, val);
		}
	}
	else
	{
		if(x < tree[root])
		deleteTree(tree, left, x);
		else
		deleteTree(tree, right, x);
	}

}

void traverseTree(vector<int>&tree, int root)
{
	//inorder traversal : sorted
    if(root>=tree.size())
    return;
	int left = 2*root;
	int right = left + 1;
	if(tree[left]!=-1)
	traverseTree(tree, left);
	if(tree[root]!=-1)
	cout<<tree[root]<<" ";
	if(tree[right]!=-1)
	traverseTree(tree, right);
}

void tc()
{
	vector<int>tree(101, -1);
	//for array root will be at index 1
	insertTree(tree, 1, 10);
	insertTree(tree, 1, 13);
	insertTree(tree, 1, 12);
	

	traverseTree(tree, 1);
	cout<<endl;
	deleteTree(tree, 1, 10);
	traverseTree(tree, 1);
	

	
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