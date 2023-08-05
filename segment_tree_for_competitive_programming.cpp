#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef deque<ll> di;
typedef pair<ll,ll> pi;
#define pb push_back
#define mp make_pair
#define mh make_heap
#define pf push_front
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 1000000000
#define FOR(i,a,b) for(ll i=a;i<b;i++)

void SegmentTree(ll *arr,ll *tree,ll start_index,ll end_index,ll tree_node)
{
    if(start_index==end_index)
    {
        tree[tree_node]=arr[start_index];
        return;
    }
    ll mid=(start_index+end_index)/2;
    SegmentTree(arr,tree,start_index,mid,2*tree_node);
    SegmentTree(arr,tree,mid+1,end_index,2*tree_node+1);
    tree[tree_node]=tree[2*tree_node]+tree[2*tree_node+1];
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll arr[]={1,2,3,4,5,6,7,8,9};
    ll *tree=new ll[18]; // size of the segment tree will be 2*arr_size
    SegmentTree(arr,tree,0,8,1);// (arr,tree,starting_index,ending_index,initial node)
    FOR(i,1,18)
    {
        cout<<tree[i]<<endl;
    }
    return 0;
}


