#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)

//Root must be returned in every function !!!!!!!!
// for array left = 2*n and right= 2*n + 1 indexing
struct treeNode{
	int val;
	treeNode *left, *right;
	treeNode(): val(0), left(nullptr), right(nullptr){};
	treeNode(int x) : val(x), left(nullptr), right(nullptr) {};

};


treeNode* minValue(treeNode *root)
{
	treeNode *temp = root;
	if(temp==nullptr)
	return temp;
	while(temp->left != nullptr)
	{
		temp = temp->left;
	}

	return temp;
}

treeNode* maxValue(treeNode *root)
{
	treeNode *temp = root;
	if(temp==nullptr)
	return temp;
	while(temp->right != nullptr)
	{
		temp = temp->right;
	}

	return temp;
}


treeNode* deleteNode(treeNode *root, int x)
{
	if(root==nullptr)
	return root;
	if(root->val == x)
	{
	    if(root->left == nullptr)
		{
			treeNode *ptr = root->right;
			delete root;
			return ptr;
		}
		else if(root->right == nullptr)
		{
			treeNode *ptr = root->left;
			delete root;
			return ptr;
		}
		else
		{
			//using root->right minValue
			treeNode *ptr = minValue(root->right);
			root->val = ptr->val;
			root->right = deleteNode(root->right, root->val);
			return root;
			

			//using root->left maxValue
			/*
			treeNode *ptr = maxValue(root->left);
			root->val = ptr->val;
			root->left = deleteNode(root->left, root->val);
			return root;
			*/
		}
	}
	else
	{
		if(x < root->val)
		root->left = deleteNode(root->left, x);
		else
		root->right = deleteNode(root->right, x);
	}
	return root; // returning root is must for every function
}


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
	return root; //this return is must for every function
	
}

//inorder traversal gives increasing order sorted list

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
	root = insertNode(root, 9);
	root=insertNode(root,12);
	root = deleteNode(root, 9);
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