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
vi vec[100000];
ll visited[100000];

void dfs(ll k)
{
    if(!visited[k])
    {
        visited[k]=1;
        FOR(i,0,vec[k].size())
        {
            if(!visited[vec[k][i]])
                dfs(vec[k][i]);
        }
    }
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    int t;
    cin>>t;
    while(t--)
    {
        ll p,q; //directional graph
        cin>>p>>q;
        vec[p].pb(q);
    }
    //if node l to m can be visited
    ll l,m;
    cin>>l>>m;
    dfs(l);
    if(!visited[m])
        cout<<"Not"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}

