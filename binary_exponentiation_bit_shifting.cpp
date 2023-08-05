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

ll binpow(ll a,ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)//if n is odd
            res=res*a;// when rightmost bit is 1 like 1101
        a=a*a; //for next binary multiplication as a1,a2,a4,a8,....alogn
        n>>=1;
    }
    return res;
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    cout<<binpow(3,13)<<endl;


    return 0;
}


