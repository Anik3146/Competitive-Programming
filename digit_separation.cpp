#include <bits/stdc++.h>
typedef long long int ll;
#define INF 1000000000

using namespace std;


int main(){
    int x;
    cin>>x;
    while(x>0)
    {
        int r=x%10;
        cout<<r<<" ";
        x/=10;
    }

    return 0;
}
