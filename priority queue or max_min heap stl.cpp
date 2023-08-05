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
    //Priority Queue
    //max_heap
    priority_queue<int> maxi;
    //min_heap
    priority_queue<int, vector<int>,greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    int s=maxi.size();
    for(int i=0;i<s;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
    }
    cout<<endl;
    mini.push(1);  //priority_queue<int, vector<int>, greater<int> > object;
    mini.push(2);
    mini.push(3);
    mini.push(4);

    s=mini.size();
    for(int i=0;i<s;i++){
    cout<<mini.top()<<" ";
    mini.pop();
    }
    cout<<endl;
    cout<<"min heap empty ? :"<<mini.empty()<<endl;



    return 0;
}


