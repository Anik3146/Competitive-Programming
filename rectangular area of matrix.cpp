#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int main(){

    int a[10][10];int c[20];
    stack<int> s;
    int i,j,n,m,t=0,k=0,index=0,flag=0,big=-1,temp;
    cout<<"Enter the m*n  matrix :"<<endl;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=m-2;j>=0;j--)
        {
            if(a[j][i]==1)
                t++;
            else
            {
                c[index++]=t;
                break;
            }
            if(t==m-1)
            {
                c[index++]=t;
                break;
            }

        }
        t=0;
    }
    if(s.empty())
        s.push(0);
    for(i=1;i<index;i++)
    {
        if(c[i]>c[s.top()])
            s.push(i);
        else
        {
            while(!s.empty())
            {
                temp=(i-s.top())*c[s.top()];
                s.pop();
                if(temp>big)
                    big=temp;
            }
            s.push(i);
        }
    }
    cout<<big<<endl;
    return 0;
}


