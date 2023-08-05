#include<bits/stdc++.h>
using namespace std;

int a[10];

bool is_safe(int r, int c)
{
    for(int i=1; i<r; i++)
    {
        if((abs(a[i]-c)==abs(r-i))||c==a[i])
            return 0;

    }
    return 1;
}

void NQ(int r, int n)
{
    if(r>n)
    {
        cout<<"\nSolution :";
        for(int j=1; j<=n; j++)
            cout<<a[j]<<" ";
        cout<<"\n"<<endl;
        return;
    }
    for(int c=1; c<=n; c++)
    {
        a[r] = c;
        if(is_safe(r,c))
        {

            NQ(r+1,n);
        }
        else
        {
            cout<<"Backtrack From Node : ";
            for(int j=1; j<=r; j++)
                cout<<a[j]<<" ";
                cout<<endl;
        }

    }
}

int main()
{
    int q;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout<<"Enter how many queen for the grid : ";
    cin>>q;
    cout<<q<<endl;
    NQ(1,q);
    return 0;
}
