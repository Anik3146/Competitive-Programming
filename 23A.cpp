#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

int main(){

    vector<string> v;
    char c[101];int i,j,k,count=0,high=0,max=0,l=0;
    char temp[10000];string flag;
    cin>>c;
    for(i=0;i<strlen(c);i++)
    {
        k=0;
        for(j=i;j<strlen(c);j++)
        {
            temp[k++]=c[j];
            temp[k]='\0';
            v.push_back(temp);
        }
    }
    for(i=0;i<v.size();i++)
    {
        count=0;
        for(j=0;j<v.size();j++)
        {
            if(v[i]==v[j])
                count++;
        }
        if(count>high)
            high=count;
        if(v[i].size()>max && count>=2)
            max=v[i].size();
    }

    cout<<max<<endl;

    return 0;
}



