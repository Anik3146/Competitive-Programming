#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef deque<int> di;
typedef pair<int,int> pi;
#define pb push_back
#define mp make_pair
#define mh make_heap
#define s second
#define f first
#define pf push_front
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 1000000000
#define pi 3.14159265358979323846264338327950L
#define FOR(i,a,b) for(int i=a;i>=b;i--)

int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    int coin[8]={1,2,5,10,20,50,100,200};
    int count_=0;
    int s=sizeof(coin)/sizeof(coin[0]);
    int n;
    cin>>n;
    while(n>0)
    {
        FOR(i,s-1,0)
        {
            if(coin[i]<=n)
            {
                cout<<"Coin "<<coin[i]<<":"<<n/coin[i]<<endl;
                count_+=n/coin[i];
                n=n%coin[i];

            }
        }
    }
    cout<<count_<<endl;


    return 0;
}

