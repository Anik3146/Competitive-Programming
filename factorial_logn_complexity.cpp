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
//multiplication of two matrix
void multiply(ll a[2][2],ll b[2][2])
    {
        ll mul[2][2];
        for(ll i=0;i<2;i++)
            for(ll j=0;j<2;j++)
        {
            mul[i][j]=0;
            for(ll k=0;k<2;k++)
                mul[i][j]+=(a[i][k]*b[k][j]);
        }
        for(ll i=0;i<2;i++)
            for(ll j=0;j<2;j++)
            a[i][j]=mul[i][j];
    }

//exponentiation of matrix
    void power(ll F[2][2],ll n)
    {
        ll M[2][2]={{1,1},{1,0}};
        if(n==0 || n==1)
            return;
        power(F,n/2);
        multiply(F,F);
        if(n%2)
            multiply(F,M);
    }

    //first function
    ll factorial(ll n)
    {
        if(n==0)
            return 0;
        ll F[2][2]={{1,1},{1,0}};
        power(F,n-1); //to get the exponential power
        return F[0][0]; //F[0][0] is the desired answer

    }


int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS

    ll n;
    cin>>n;
    cout<<factorial(n)<<endl;



    return 0;
}


