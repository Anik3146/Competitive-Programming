#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define mp make_pair
#define mh make_heap
#define pf push_front
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define INF 100000002340
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define F first
#define S second

void addEdge(vector<pair<ll,ll>>adj[],ll u,ll v,ll wt)
{
	adj[u].pb(mp(v,wt));
	adj[v].pb(mp(u,wt));
}


void print(vector<pair<ll,ll>>adj[],ll n)
{
	rep(i,0,n)
	{
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<<i<<" "<<it->F<<" "<<it->S<<endl;
		}
	}
}

void tc()
{
	ll n=5;
	vector<pair<ll,ll>> adj[n];
	
	addEdge(adj,0,1,10);
	addEdge(adj, 1,2,5);
	addEdge(adj, 2,3,6);
	addEdge(adj, 3,4,8);
	
	print(adj, n);
	
	

}


int main()
{
    IOS
    
 // ll t; cin>>t; while(t--)
      
	tc();



    return 0;
}
