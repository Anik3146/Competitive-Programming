#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)

struct treeNode{
	int val;
	treeNode *left, *right;
	treeNode(): val(0), left(nullptr), right(nullptr){};
	treeNode(int x) : val(x), left(nullptr), right(nullptr) {};

};


treeNode* insertNode(treeNode *root, int x)
{
	if(root==nullptr)
	{
		root = new treeNode(x);
		return root;
	}

	if(root->val > x)
	{
			root->left = insertNode(root->left, x);
	}
	else if(root->val <= x)
	{
			root->right = insertNode(root->right, x);
	}
	return root;
	
}

void traverse(treeNode *root)
{
	if(root==nullptr)
	{
		return;
	}
	traverse(root->left);
	cout<<root->val<<" ";
	traverse(root->right);
	
}

void tc()
{
	treeNode *root = nullptr;
	root = insertNode(root, 10);
	root = insertNode(root, 20);
	root = insertNode(root, 8);
	root = insertNode(root, 9);
	root = insertNode(root, 12);
	root = insertNode(root, 22);
	root = insertNode(root, 7);
	traverse(root);
	
	delete root;

	
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