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
    int x = 5328; // 00000000000000000001010011010000
cout << __builtin_clz(x) << "\n"; // 19 // the number of zeros at the beginning
cout << __builtin_ctz(x) << "\n"; // 4 // the number of zeros at the end
cout << __builtin_popcount(x) << "\n"; // 5 //the number of ones in the bit representation
cout << __builtin_parity(x) << "\n"; // 1 //the parity (even or odd) of the number of ones
//for long long __builtin_clzll() can be used

    return 0;
}


