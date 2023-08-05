#include <bits/stdc++.h>
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
const ll mod=1e9+7;
const ll MAX=2000;

vector<vector<ll>> G;

bool temp[MAX];

void dfs(ll v)
{
    if(temp[v])
        return;
    temp[v]=true;
    for(auto x:G[v])
        dfs(x);
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll n,m;
    cin>>n>>m;
    G.resize(n); //resizes the vector data structure
    FOR(i,0,m)
    {
        ll a,b;
        cin>>a>>b;
        G[a-1].pb(b-1);

    }
    ll ans=0;
    FOR(i,0,n)
    {
        for(ll j=0;j<n;j++)
            temp[j]=false;
        dfs(i);
        for(ll j=0;j<n;j++)
            if(temp[j])
                ans++;
    }
    cout<<ans<<endl;
    return 0;
}

