#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s2;
    char s1[100][10];
    cin>>s2;
    int n,count3=0,count4=0,t=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
        if(s1[i][0]==s2[1])
            count3++;
        if(s1[i][1]==s2[0])
            count4++;
        if(s1[i]==s2)
            t++;
    }
    if(t>0)
        cout<<"yes"<<endl;
    else if(count3>0 && count4>0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;


    return 0;
}
