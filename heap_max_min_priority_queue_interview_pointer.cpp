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
	treeNode *left;
	treeNode *right;
	treeNode() : val(0), left(nullptr), right(nullptr){};
	treeNode(int x) : val(x), left(nullptr), right(nullptr){};

};

// always use bubbleUp sort to get sorted list when inserting and deleting 
void bubbleUpMinHeap(treeNode *root)
{
	if(root==nullptr)
	return;
	if(root->left != nullptr)
	{
		if(root->val > root->left->val)
		swap(root->val, root->left->val);
		bubbleUpMinHeap(root->left);
	}
	if(root->right != nullptr)
	{
		if(root->val > root->right->val)
		swap(root->val, root->right->val);
		bubbleUpMinHeap(root->right);
	}
}

void bubbleUpMaxHeap(treeNode *root)
{
	if(root==nullptr)
	return;
	if(root->left != nullptr)
	{
		if(root->val < root->left->val)
		swap(root->val, root->left->val);
		bubbleUpMaxHeap(root->left);
	}
	if(root->right != nullptr)
	{
		if(root->val < root->right->val)
		swap(root->val, root->right->val);
		bubbleUpMaxHeap(root->right);
	}
}

treeNode* insertMinHeap(treeNode* root, int x)
{
	if(root == nullptr)
	{
		return new treeNode(x);
	}
	if(x < root->val)
	{
		swap(x, root->val);
	}
	if(root->left == nullptr)
	{
		root->left = insertMinHeap(root->left, x);
	}
	else if(root->right == nullptr)
	{
		root->right = insertMinHeap(root->right, x);
	}
	else
	{
		if(rand()%2 == 0)
		{
			root->left = insertMinHeap(root->left, x);
		}
		else
		{
			root->right = insertMinHeap(root->right, x);
		}
	}
	bubbleUpMinHeap(root);
	return root;
}

treeNode* insertMaxHeap(treeNode* root, int x)
{
	if(root == nullptr)
	{
		return new treeNode(x);
	}
	if(x > root->val)
	{
		swap(x, root->val);
	}
	if(root->left == nullptr)
	{
		root->left = insertMaxHeap(root->left, x);
	}
	else if(root->right == nullptr)
	{
		root->right = insertMaxHeap(root->right, x);
	}
	else
	{
		if(rand()%2 == 0)
		{
			root->left = insertMaxHeap(root->left, x);
		}
		else
		{
			root->right = insertMaxHeap(root->right, x);
		}
	}
	bubbleUpMaxHeap(root);
	return root;
}

treeNode *deleteMinHeap(treeNode *root)
{
	if(root==nullptr)
	return root;

	if(root->left == nullptr && root->right == nullptr)
	{
		delete root;
		return nullptr;
	}
	else
	{
		if(root->left != nullptr && root->right !=nullptr)
		{
			if(root->left->val <= root->right->val)
			{
				root->val = root->left->val;
				root->left = deleteMinHeap(root->left);
			}
			else
			{
				root->val = root->right->val;
				root->right = deleteMinHeap(root->right);
			}
		}
		else if(root->left != nullptr)
		{
			root->val = root->left->val;
			root->left = deleteMinHeap(root->left);
		}
		else
		{
			root->val = root->right->val;
			root->right = deleteMinHeap(root->right);
		}
	}
	bubbleUpMinHeap(root);
	return root;
}

treeNode *deleteMaxHeap(treeNode *root)
{
	if(root==nullptr)
	return root;

	if(root->left == nullptr && root->right == nullptr)
	{
		delete root;
		return nullptr;
	}
	else
	{
		if(root->left != nullptr && root->right !=nullptr)
		{
			if(root->left->val >= root->right->val)
			{
				root->val = root->left->val;
				root->left = deleteMaxHeap(root->left);
			}
			else
			{
				root->val = root->right->val;
				root->right = deleteMaxHeap(root->right);
			}
		}
		else if(root->left != nullptr)
		{
			root->val = root->left->val;
			root->left = deleteMaxHeap(root->left);
		}
		else
		{
			root->val = root->right->val;
			root->right = deleteMaxHeap(root->right);
		}
	}
	bubbleUpMaxHeap(root);
	return root;
}


void traverse(treeNode* root)
{
	if(root==nullptr)
	return;

	traverse(root->left);
	cout<<root->val<<" ";
	traverse(root->right);
}

void tc()
{
	treeNode *minHeap = nullptr;
	minHeap = insertMinHeap(minHeap, 12);
	minHeap = insertMinHeap(minHeap, 11);
	minHeap = insertMinHeap(minHeap, 10);
	minHeap = insertMinHeap(minHeap, 1);
	minHeap = insertMinHeap(minHeap, 14);
	
	traverse(minHeap);
	cout<<endl;

	minHeap = deleteMinHeap(minHeap);
	minHeap = deleteMinHeap(minHeap);
	traverse(minHeap);

	cout<<endl;

	treeNode *maxHeap = nullptr;
	maxHeap = insertMaxHeap(maxHeap, 12);
	maxHeap = insertMaxHeap(maxHeap, 11);
	maxHeap = insertMaxHeap(maxHeap, 10);
	maxHeap = insertMaxHeap(maxHeap, 1);
	maxHeap = insertMaxHeap(maxHeap, 14);
	
	traverse(maxHeap);
	cout<<endl;

	maxHeap = deleteMaxHeap(maxHeap);
	maxHeap = deleteMaxHeap(maxHeap);
	traverse(maxHeap);

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