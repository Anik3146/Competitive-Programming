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
    //Dequeue
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    d.pop_front();
    for(auto i: d)
        cout<<i<<" ";
    cout<<endl;
    d.push_front(3);
    cout<<"First element :"<<d.at(1)<<endl;
    cout<<"front :"<<d.front()<<endl;
    cout<<"back :"<<d.back()<<endl;
    cout<<"empty or not?"<<d.empty()<<endl;
    cout<<"Before erase :"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase :"<<d.size()<<endl;



    return 0;
}


