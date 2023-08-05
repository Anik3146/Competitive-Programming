#include<iostream>
#include <stdio.h>

using namespace std;

int fib_bottom_up(int x)
{
    if(x==1 || x==2)
    {
        return 1;
    }
    else{

        int *bottom_up=new int[x+1];
        bottom_up[1]=1;
        bottom_up[2]=2;
        for(int i=3;i<=x;i++)
        {
            bottom_up[i]=(bottom_up[i-1]+bottom_up[i-2]);
        }
        return bottom_up[x];
    }
}

int main() {

    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<fib_bottom_up(n)<<endl;
    return 0;
}

