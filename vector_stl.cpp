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
    //vector
    vector<int>v;
    //initialize size and initial all element
    vector<int>a(5,1);
    for(auto i: a)
        cout<<a[i]<<" ";
    cout<<endl;
    //creating a new vector with elements of existing vector
    vector<int> b(a);
    for(auto i: b)
        cout<<b[i]<<" ";
    cout<<endl;


    cout<<"Capacity :"<<v.capacity()<<endl;
    v.pb(1);
    v.pb(2);
    v.pb(3);
    cout<<"Size :"<<v.size()<<endl;
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Element at 2nd index :"<<v.at(2)<<endl;
    cout<<"Front element :"<<v.front()<<endl;
    cout<<"Back element :"<<v.back()<<endl;
    v.pop_back();
    for(auto i: v) cout<<v[i]<<" ";
    cout<<endl;
    cout<<"Before clearing :"<<v.size()<<endl;
    v.clear();
    cout<<"After clearing :"<<v.size()<<endl;
    vector<pair<int,int>> vec; //for vector
    vec.push_back({1,2});
    cout<<vec[0].first<<endl;
    v.pb(1);
    v.pb(2);
    v.pb(3);
    vector<int>::iterator it=v.begin();
    it=it+2;
    cout<<*(it)<<endl;


    return 0;
}


