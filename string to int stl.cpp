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

template<class t1,class t2>
t2 add(t1 a, t2 b)
    {
        return a+b;
    }
template<class t1,class t2>
t2 sub(t1 a,t2 b)
{
    return a-b;
}
template<class t1,class t2>
t2 mul(t1 a,t2 b)
{
    return a*b;
}
template<class t1,class t2>
t2 div(t1 a,t2 b)
{
    return a/b;
}


int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    ifstream file("input.txt");
    if(file.is_open())
    {
        string s;
         while(getline(file,s))
         {
            char str[1000]; ll k=0;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]!=' ') str[k++]=s[i];
            }
            str[k]='\0';
            string s1=str,str1,str2;char ch;
            for(ll i=0;i<s1.size();i++)
            {
                if(s1[i]=='+' || s1[i]=='-' || s1[i]=='*' || s1[i]=='/')
                    {
                        str1=s1.substr(0,i); str2=s1.substr(i+1,s.size()-1);
                        ch=s1[i];
                    }
            }
            double x,y;
            ll flag1=0,flag2=0;
            for(ll i=0;i<str1.size();i++) if(str1[i]=='.') flag1=1;
            for(ll i=0;i<str2.size();i++) if(str2[i]=='.') flag2=1;
            stringstream sf(str1); sf>>x;
            stringstream sl(str2); sl>>y;
            double res;
            if(ch=='+') res=add(x,y);
            if(ch=='-') res=sub(x,y);
            if(ch=='*') res=mul(x,y);
            if(ch=='/') res=div(x,y);
            map<char,string> mp;
            mp.insert(pair<char,string>('+',"Addition"));
            mp.insert(pair<char,string>('-',"Subtraction"));
            mp.insert(pair<char,string>('*',"Multiplication"));
            mp.insert(pair<char,string>('/',"Division"));

            if(flag1==0 && flag2==0) cout<<"int "<<mp[ch]<<" int = "<<res<<endl;
            if(flag1==0 && flag2==1) cout<<"int "<<mp[ch]<<" double = "<<res<<endl;
            if(flag1==1 && flag2==0) cout<<"double "<<mp[ch]<<" int = "<<res<<endl;
            if(flag1==1&& flag2==1) cout<<"double "<<mp[ch]<<" double = "<<res<<endl;


         }

        file.close();
    }

    return 0;
}


