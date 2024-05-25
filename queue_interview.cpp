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
{   //FIFO
	queue<int>a;
	a.push(10);
	a.push(20);
	a.push(30);
	a.push(40);
	a.push(50);
	a.push(60);
	while(!a.empty())
	{
		cout<<a.front()<<" "<<a.back()<<endl;
		a.pop();
	}

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