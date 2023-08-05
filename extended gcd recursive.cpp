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


long long int x, y, d;
void gcd(long long int a, long long int b){
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
        return;
    }
    gcd(b, a % b);
    long long int x1, y1;
    x1=y;
    y1=x-(y*(a/b));
    x=x1;
    y=y1;
}



int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll a,b;
    while(cin>>a>>b)
    {
        gcd(a,b);
        cout<<x<<" "<<y<<" "<<d<<endl;
    }

    return 0;
}

