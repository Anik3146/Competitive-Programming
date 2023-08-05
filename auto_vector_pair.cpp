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
    ll q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        vector<int> vec(n);
        for(auto &it: vec)
            cin>>it;
        vector<pair<int,int>> res;
        ll index=-1;
        for(ll i=0;i<n;i++)
        {
            if(vec[i]!=vec[0])
            {
                index=i;
                res.pb({1,i+1});
            }
        }
        if(index==-1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i=1;i<n;i++)
        {
            if(vec[i]==vec[0])
                res.pb({index+1,i+1});
        }
        cout<<"YES"<<endl;
        vector<pair<int,int>>:: iterator it;
        for(it=res.begin();it!=res.end();++it)
            cout<<it->first<<" "<<it->second<<endl;

    }

    return 0;
}

