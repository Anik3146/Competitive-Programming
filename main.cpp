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
#define INF 100000002340
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define F first
#define S second

const ll mod=1e7+7;


void tc()
{
    string s;
    cin>>s;
    string s1="0"+s;
    ll k=s1.size()-1;
    for(int i=s1.size()-2;i>=0;i--)
    {
        int d = s1[i]-'0';
        int db = s1[i+1]-'0';
        if(db>=5){
            if(d==9)
            {
                s1[i-1]=s1[i-1]+1;
                s1[i]='0';
            }
        else{
                d=d+1;
        char ch = d+48;
        s1[i]=ch;
        }

    }
    }

   for(int i=0;i<s.size();i++)
   {
       int d = s1[i]-'0';
       if(d>=5)
       {
           k=i;break;
       }
   }
   if(s1[0]=='0')
   {
       for(int i=1;i<=k;i++)
       {
           cout<<s1[i];
       }
       for(int i=k+1;i<s.size();i++)
       {
           cout<<'0';
       }
       cout<<endl;
   }
   else
   {
       for(int i=0;i<=k;i++)
       {
           cout<<s1[i];
       }
       for(int i=k+1;i<s.size();i++)
       {
           cout<<'0';
       }
       cout<<endl;
   }
}


int main()
{
    IOS
    //freopen ("input.txt","r",stdin);
    //freopen ("output.txt","w",stdout);
    ll t;cin>>t;
    while(t--)
    tc();

    return 0;
}
