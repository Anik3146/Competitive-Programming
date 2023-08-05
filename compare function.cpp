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

bool comparefn(pi a, pi b)
{
    if(a.second!=b.second)
    return a.first<b.first; // instead of <=
    return false;
}

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    pair<ll,ll> a[]={{3,4},{1,2},{5,6},{7,8},{9,10}}; //for array
    sort(a,a+5,comparefn);
   for(ll i=0;i<5;i++)
   cout<<a[i].first<<" "<<a[i].second<<endl;

    return 0;
}

