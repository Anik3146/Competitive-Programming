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

ll sq(ll n)
{
    ll temp = sqrt(n)+2;
    while(temp*temp > n)temp--;
    return temp;
}

void tc()
{

    ll n; cin>>n;
    cout<<sq(n-1ll)<<endl;
}


int main()
{
    IOS
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);

    ll t; cin>>t;
    while(t--)
    tc();


    return 0;
}

