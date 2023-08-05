#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

int queen[20];
int column[40],diagonal1[40],diagonal2[40];

void nqueen(int at,int n)
{
    int i;
    if(at==n+1)
    {
        cout<<"(row,column)= ";
        for(i=1;i<=n;i++)
        {
            cout<<"("<<i<<","<<queen[i]<<")"<<endl;
        }
        cout<<endl;
        return;
    }
    for(i=1;i<=n;i++)
    {
        if(column[i] || diagonal1[i+at] || diagonal2[n+i-at])
            continue;
        queen[at]=i;
        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=1;
        nqueen(at+1,n);
        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=0;
    }
}

using namespace std;


int main(){

    for(int i=0;i<40;i++)
    {
        diagonal1[i]=0;
        diagonal2[i]=0;
        column[i]=0;
    }
    nqueen(1,8);
    return 0;
}



