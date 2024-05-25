#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)


void tc()
{
	vector<ll>a{1,2,-4,5,-2,9,1};

    ll max_subarray=0;
    ll dynamic_sum = 0;

    rep(i,0,a.size())
    {
        dynamic_sum += a[i];
        dynamic_sum = max(0LL, dynamic_sum);
        max_subarray = max(max_subarray, dynamic_sum);
    }
	
    cout<<max_subarray<<endl;
	
}


	
int main()
{
	//freopen("blist.in", "r", stdin);
	//freopen("blist.out", "w", stdout);
    IOS
	//ll t; cin>>t; while(t--)
	
 	tc();

    return 0;
}