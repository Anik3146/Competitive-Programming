#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<vector>

using namespace std;

int main(){

    int n,a[101],i,fix=0,temp,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]>a[i-1])
                {
                    temp=a[i]-a[i-1];
                    if(temp>fix && fix==0)
                        fix=temp;
                    else if(temp>fix && fix!=0 && temp>0)
                        flag=1;
                }
                else if(a[i]<a[i-1])
                {
                    temp=a[i-1]-a[i];
                    if(temp>fix && fix==0)
                        fix=temp;
                    else if(temp>fix && fix!=0 && temp>0)
                        flag=1;

                }
            }
        }
        {
            if(a[0]>a[n-1])
                {
                    temp=a[0]-a[n-1];
                    if(temp>fix && fix==0)
                        fix=temp;
                    else if(temp>fix && fix!=0 && temp>0)
                        flag=1;
                }
                else if(a[0]<a[n-1])
                {
                    temp=a[n-1]-a[0];
                    if(temp>fix && fix==0)
                        fix=temp;
                    else if(temp>fix && fix!=0 && temp>0)
                        flag=1;
                }
        }
        if(flag==0)
            cout<<fix<<endl;
        else
            cout<<-1<<endl;

    return 0;
}

