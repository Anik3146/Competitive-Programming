#include <bits/stdc++.h>
#include <algorithm>
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

ll ternary(ll a[],ll low,ll high,ll key)
{
    while(low<=high)
    {
        ll mid1=low+((high-low)/3);
        ll mid2=high-((high-low)/3);
        if(key==a[mid1])
            return mid1;
        else if(key==a[mid2])
            return mid2;
        else if (key<a[mid1])
            return ternary(a,low,mid1-1,key);
        else if (key>a[mid2])
            return ternary(a,mid2+1,high,key);
        else
            return ternary(a,mid1+1,mid2-1,key);
    }
    return -2;
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll n;
    cin>>n;
    ll a[n];
    FOR(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll p;
    cin>>p;
    while(p--)
    {
        ll z;
        cin>>z;
        cout<<ternary(a,0,n-1,z)+1<<endl;
    }

    return 0;
}

