#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<conio.h>

int doors[101];

using namespace std;

int main(){

    int i,j,n,closed=0,opened=0;
    for(i=1;i<101;i++) doors[i]=0;
    cout<<"The closed doors are pointed by 0 and opened doors by 1 :"<<endl;
    for(i=1;i<101;i++)
    {
        cout<<doors[i]<<" ";
    }
    cout<<endl;

    for(i=1;i<101;i++)
    {
        opened=0;
        closed=0;
        cout<<"\nAfter assigning the multiples of "<<i<<" :"<<endl;
        for(j=1;j<101;j++)
        {
            if(j%i==0)
            {
                if(doors[j]==0)
                    doors[j]=1;
                else
                    doors[j]=0;
            }
        }
    for(j=1;j<101;j++)
    {
        cout<<doors[j]<<" ";
        if(doors[j]==0)
            closed++;
        else
            opened++;

    }
    cout<<endl;
    cout<<"\nOpened = "<<opened<<" Closed = "<<closed<<endl;

    }
    getch();
    return 0;
}

