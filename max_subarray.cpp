#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define INF 1000000000
#define loop(i,a,b) for(int i=a;i<b;i++)
int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m=0,sum=0;
    int n;cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
    }
    loop(i,0,n)
    {
        sum=max(a[i],sum+a[i]);
        m=max(sum,m);
    }
    cout<<m<<endl;
    return 0;
}

