#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
vector< int> vec;
vector<int>store;

int main()
{
    int a,b,c,n,x,L,R,K,V;
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    cin>>a;
    for(i=0;i<a;i++)
    {

    cin>>b;
    switch(b)
    {

    case 1:
        {
            cin>>V;
            vec.push_back(V);
            break;

        }
    case 2:{
        vec.pop_back();
        break;
    }

    case 3:
        {
            cin>>L>>R>>K;
            for(j=L-1;j<=R-1;j++)
            {
                store.push_back(vec[j]);
            }
            sort(store.begin(),store.end());
            cout<<store[(store.size())-K]<<endl;
            store.clear();
            break;
        }

    }
    }



    return 0;
}
