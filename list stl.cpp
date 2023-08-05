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
    //List
    list<int> l;
     l.push_back(1);
    l.push_front(2);
    //copying existing list to another one
    list<int> new_list(l);
    //list with size and initial value
    list<int> a(5,10);

    for(auto i: l)
        cout<<i<<" "; cout<<endl;

    l.erase(l.begin());
    cout<<"after erase : ";
    for(auto i: l)
        cout<<i<<" "; cout<<endl;

    cout<<"Size :"<<l.size()<<endl;

    cout<<"New list->"<<endl;
    for(auto i: new_list)
        cout<<i<<" "; cout<<endl;

    cout<<"list a:"<<endl;
     for(auto i: a)
        cout<<i<<" "; cout<<endl;


    return 0;
}


