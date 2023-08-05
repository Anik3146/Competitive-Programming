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
const ll mod=1e7+7;

//template
template <class T>
T add(T a,T b)
{
    return a+b;
}
//for two different data type
template<class first,class second>
second fun(first a,second b)
    {
        return a<b?a:b;
    }
//classes can use the templates as well
template <class temp>
class anik{
    temp first,second;
public:
    anik(temp a,temp b)
    {
        first=a;
        second=b;
    }
    temp bigger();

};
//to define the parameters the same template line is needed to write before function
//definition
template <class temp>
temp anik<temp>::bigger(){    //data type of temp class and also <temp> must be
         return first>second?first:second;
                            //written after the class name
}
template<class T1>
class messi{
    public:
        messi(T1 x)
        {
            cout<<x<<" is not a character!!"<<endl;
        }
};
template<>//the template <> must be empty for redeclaring a class
class messi<char>{ //if template class is empty the data type must be declared
                    //before function body
public:
    messi(char x)
    {
        cout<<x<<" is a character!!"<<endl;
    }

};


int main()
{
    //freopen("contest.txt","r",stdin);
    //freopen("contest.txt","w",stdout);
    IOS
    anik<int> ob(23,500);//the data type before object must be declared for classes
    cout<<ob.bigger()<<endl;
    messi<char> ob1('a');
    messi<int>ob2(2);
    messi<double>ob3(2.5);

    return 0;
}


