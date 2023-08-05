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

ll binpow(ll a,ll n,ll m)
{
    if(n==0)return 1;
    if(n==1)return a%m;
    ll res=binpow(a,n/2,m);
    if(n%2)
        return res*res*a%m;
    else
        return res*res%m;

}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll z= binpow(n,k,1000);//for last 3 digit 3 zeros of 1000


    }

    return 0;
}

