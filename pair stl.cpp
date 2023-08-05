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

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    //pair
    //inputs must be taken in second brackets
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int,int>> q={1,{3,5}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;

    pair<int,int> a[]={{1,2},{3,4},{5,6},{7,8},{9,10}}; //for array
    cout<<a[1].first<<endl;

    vector<pair<int,int>> vec; //for vector
    vec.push_back({1,2});
    cout<<vec[0].first<<endl;

    return 0;
}


