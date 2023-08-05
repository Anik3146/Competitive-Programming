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
    //Algorithm
    vector<int> v;

    v.pb(2);
    v.pb(11);
    v.pb(1);
    v.pb(3);

    //before binary search the array must be sorted!!!
    sort(v.begin(),v.end());
    cout<<binary_search(v.begin(),v.end(),1)<<endl;

    //searching an elements bound depends on all the values of array
    //lower bound of value 3
    cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    //upper bound of value 5
    cout<<"Upper bound ->"<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.end())<<endl;


    cout<<"Position of max element "<<max_element(v.begin(),v.end())-v.begin()<<endl;

    int a=3,b=5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    //rotate the values of vector
    rotate(v.begin(),v.begin()+2,v.end()); //1,2,3,11

    for(auto i: v)
        cout<<i<<" "; cout<<endl; //3,11,1,2 means 2 elements from the front rotates

    return 0;
}


