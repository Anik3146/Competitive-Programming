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
    ll res=1;
    while(n>0)
    {
        if(n&1)//if n is odd
            res=res*a%m;
        a=a*a%m; //because 110 is half of 1101 after binary right shifting
        n>>=1;
    }
    return res;
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    cout<<binpow(3,13,2)<<endl;


    return 0;
}


