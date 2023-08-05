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


int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    ll a[2][2]={{3,4},{2,1}};
    ll b[2][2]={{1,5},{3,7}};
    ll mul[2][2];
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)
        {
            mul[i][j]=0;
            for(ll k=0;k<2;k++)
            {
                mul[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)
            cout<<mul[i][j]<<" ";
        cout<<endl;
    }





    return 0;
}


