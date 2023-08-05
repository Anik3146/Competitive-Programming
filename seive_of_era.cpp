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

void seive_of_eratosthenes()
{
    ll n; cin>>n;
    ll primes[n+1];
    FOR(i,0,n+1) primes[i]=1;
    primes[0]=0;
    primes[1]=0;
    for(ll i=2;i<n+1;i++)
    {
        if(primes[i]==1)
        {
           for(ll j=2;i*j<=n;j++)
           {
               primes[i*j]=0;
           }
        }
    }
    for(ll i=0;i<=n;i++)
    {
        if(primes[i]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

}

int main()
{
    IOS
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    seive_of_eratosthenes();
    
    return 0;
}
