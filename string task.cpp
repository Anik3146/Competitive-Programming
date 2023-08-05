#include <bits/stdc++.h>
#include<string.h>
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
const ll mod=1e7+7;


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    ifstream anik("input.txt");
    string str,s;
    if(anik.is_open())
    {
        while(getline(anik,str))
        s+=str;
        anik.close();
    }

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{')
            {
                ll j=i-1,k=0;
                char s1[1000];
                while(s[j]!='(' && j>=0)
                        s1[k++]=s[j--];
                    s1[k++]='(';
                    j=j-1;
                while(s[j]!=' ' && j>=0)
                    s1[k++]=s[j--];
                    s1[k]='\0';
                while(s[j]==' ' && j>=0)
                    j--;
                    k=0;
                char t[10];
                while(s[j]!=' ' && j>=0 && s[j]!='}')
                    t[k++]=s[j--];
                t[k]='\0';
                    string s2=s1,s3=t;
                    reverse(s2.begin(),s2.end());
                    reverse(s3.begin(),s3.end());
                    cout<<s2<<", return type : "<<s3<<endl;
            }
    }



    return 0;
}


