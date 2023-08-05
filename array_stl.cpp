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
    //all the STL of C++
    //array
    array<int,4> a={1,2,3,4};
    int s=a.size();
    for(int i=0;i<s;i++)cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Element at index 2 :"<<a.at(2)<<endl;
    cout<<"Is the array empty ?"<<a.empty()<<endl;
    cout<<"First element :"<<a.front()<<endl;
    cout<<"Last element :"<<a.back()<<endl;



    return 0;
}


