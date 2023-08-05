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
void update_tree(ll *arr,ll *tree,ll start,ll last,ll index,ll value,ll node)
{
    if(start==last)
    {
        tree[node]+=value;
        return;
    }
    else
    {
        ll mid=(start+last)/2;
        if(index>=start && index<=mid)
            update_tree(arr,tree,start,mid,index,value,2*node);
        else
            update_tree(arr,tree,mid+1,last,index,value,2*node+1);
        tree[node]=tree[2*node]+tree[2*node+1];
    }
}

void update_value_in_range(ll *arr,ll *tree,ll start,ll last,ll l,ll r,ll value,ll node)
{
    if(start>last || l>last || r<start)
        return;
    if(start==last)
    {
        tree[node]+=value;
        return;
    }
    ll mid=(start+last)/2;
    update_value_in_range(arr,tree,start,mid,l,r,value,2*node);
    update_value_in_range(arr,tree,mid+1,last,l,r,value,2*node+1);
    tree[node]=tree[2*node]+tree[2*node+1];
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
    update_tree(arr,tree,0,8,3,10,1);
    cout<<"After updating one node :"<<endl;
    FOR(i,1,18)
    {
        cout<<tree[i]<<endl;
    }
    update_value_in_range(arr,tree,0,8,0,3,10,1);
    cout<<"After propagation :"<<endl;
    FOR(i,1,18)
    {
        cout<<tree[i]<<endl;
    }

    return 0;
}

