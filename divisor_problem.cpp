#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
int ans=1;
long long int d[100000];

int lcd_recursion(int start,int from=0,int to)
{
    int c=0,i=0;
    int flag=0;
    for(i=from;i<to;i++)
    {
        if(d[i]%start==0)
           c++;
    }
    if(c>1){
        ans*=start;
    for(i=from;i<to;i++)
    {
        if(d[i]%start==0)
            d[i]=d[i]/start;
        if(d[i]==1)
            flag++;
    }
        if(flag==
            return ans;
        else
            return lcd_recursion(start,from,to);
    }
    else
        return lcd_recursion(start++,from,to);

}


int main(){

    long long int t,n,i,flag=0;
    cin>>t;
    vector<int> query;
    for(i=0;i<t;i++)
    {
        flag=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>d[i];
            if(d[i]==1)
                flag++;
            if(d[i]<=0)
                flag=n;
        }
        if(flag==n || flag>n)
            cout<<-1<<endl;
        else if(n==1 && d[0]>1)
            cout<<d[0]*d[0]<<endl;
        else
        {

        }
    }

    return 0;
}

