#include<iostream>
#include<math.h>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

int used[20];
int number[20];

void permutation(int a,int n)
{
    if(a==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<number[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=1;i<=n;i++)
        if(!used[i])
    {
        used[i]=1;
        number[a]=i;
        permutation(a+1,n);
        used[i]=0;
    }
}

int main(){
    permutation(1,3);
    return 0;
}

