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
#define INF 100000002340
#define FOR(i,a,b) for(ll i=a;i<b;i++)
const ll mod=1e7+7;

void tc()
{
    vector<int> v1; v1.pb(10);v1.pb(20);
    mh(v1.begin(),v1.end(),greater<int>());
    cout<<v1.front();


}


int main()
{
    IOS
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    ll t;cin>>t;
    while(t--)
        tc();


    return 0;
}

