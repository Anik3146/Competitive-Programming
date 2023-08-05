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
    //Set
    //stores unique element not duplicates
    set<int> s;
    //unordered set which is faster
    unordered_set<int> u_s;
    //multiset which can stores duplicate elements
    multiset<int> ms;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(3);

    for(auto i: s)
        cout<<i<<" "; cout<<endl;

    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
     for(auto i: s)
        cout<<i<<" "; cout<<endl;

    cout<<"If the element exists ? "<<s.count(1)<<endl;

    set<int>::iterator itr=s.find(3);

    for(auto i=itr; i!=s.end(); i++)
        cout<<*i<<" "; cout<<endl;



    return 0;
}


