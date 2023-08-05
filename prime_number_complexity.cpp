#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<stdlib.h>
#include<sstream>
#include<time.h>
#include<new>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<queue>
#include <iterator>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a==2)
        cout<<"Prime Number"<<endl;
    else if(a>2 && a%2!=0)
    {
        for(int i=3;i<=a;i+2)
        {
            if(a%i==0 && i!=a)
            {
                cout<<"Not prime Number"<<endl;
                break;
            }
            else{
            cout<<"Prime Number"<<endl;
            break;}
        }
    }
        else
            cout<<"Not prime Number"<<endl;

    return 0;
}

