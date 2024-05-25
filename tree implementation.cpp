#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define all(a) (a).begin(),(a).end()
#define endl "\n"
#define pb push_back
#define mp make_pair
#define mh make_heap
#define pf push_front
#define mt make_tuple 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
const ll mod = 1e9+7;
#define inf 100000002340
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second

struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

void show(TreeNode *root)
{
	if(root==NULL)
	return;

	cout<<root->val<<endl;
	
	show(root->left);
	show(root->right);
}

void tc()
{
	TreeNode *ob;
	
	


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
