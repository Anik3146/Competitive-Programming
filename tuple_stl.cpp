#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define dbg(v)                                                                 \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define mp make_pair
#define mh make_heap
#define pf push_front
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define INF 100000002340
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define F first
#define S second


void tc()
{
	
	ll a=1,b=2,c=3;
	tuple<ll,ll,ll> t = tie(a,b,c);
	cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<"\n";
	
	get<1>(t)=10;
	
	cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<"\n";
	

}


int main()
{
    IOS
    //freopen("template.in", "r", stdin);
	//freopen("template.out", "w", stdout);
    tc();
 		


    return 0;
}
