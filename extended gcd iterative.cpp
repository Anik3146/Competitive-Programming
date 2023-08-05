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
//extended euclidien function iterative

ll gcd(ll a,ll b,ll &x,ll &y)
{
 x = 1, y = 0;
 ll x1 = 0, y1 = 1, a1 = a, b1 = b;
 while (b1) {
 int q = a1 / b1;
 tie(x, x1) = make_tuple(x1, x - q * x1);
 tie(y, y1) = make_tuple(y1, y - q * y1);
 tie(a1, b1) = make_tuple(b1, a1 - q * b1);
 }
 return a1;

}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS

    return 0;
}


