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
    //Map
    map<int,string> m;
    //unordered map is not sorted
    unordered_map<int,string>u_m;
    //multimap stores same keys for multiple values
    multimap<int,string>mm;
    //inserting by using array
    m[1]="Anik";
    m[2]="Fahim";
    m[3]="Soumya";
    //inserting by using insert({}) function
    m.insert({4,"Pranto"});

    for(auto i: m)
        cout<<i.first<<" "<<i.second<<endl;

    cout<<"Find a key if present? :"<<m.count(1)<<endl;

    cout<<"After erasing a key "<<endl;
    m.erase(1); //erases a key and value
     for(auto i: m)
        cout<<i.first<<" "<<i.second<<endl;


    //find returns an iterator

    auto it= m.find(2); //auto == map<int,string>::iterator

    for(auto i=it; i!=m.end(); i++) //iterates all the values before and with element where
        // element== m.find(element)
    {
        cout<<i->first<<endl;
    }


    return 0;
}


