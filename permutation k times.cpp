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
const ll mod=1e7+7;


int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll n,k;
    cin>>n>>k;
    vi a(n);
    for(auto &x: a)
        cin>>x;
    ll i=0;
            while(next_permutation(a.begin(),a.end())){
            i++;
            if(i==k-1)
            for(auto x: a)
            cout<<x<<" ";
            }

    return 0;
}


