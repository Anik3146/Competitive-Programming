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

ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll t;
    cin>>t;
    ll a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<__gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }


    return 0;
}


