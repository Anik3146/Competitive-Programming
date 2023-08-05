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

ll binary(ll a[],ll low,ll high,ll key)
{
     while(low<=high)
    {
     ll mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
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
        ll key;
        cin>>key;
        cout<<binary(a,0,n-1,key)+1<<endl;
    }
    return 0;
}

