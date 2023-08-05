#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    int min=0,max=0,i=0;
    char s[100];
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]=='4')
            min++;
        if(s[i]=='7')
            max++;
        i++;
    }
    if(min==max && (min>0 && max>0))
        cout<<4<<endl;
    else if(min>max)
        cout<<4<<endl;
    else if(min<max)
        cout<<7<<endl;
    else
        cout<<-1<<endl;
    return 0;
}

