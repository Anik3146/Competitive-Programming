#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{

if (n == 0 || W == 0)
    return 0;

if (wt[n-1] > W)
    return knapSack(W, wt, val, n-1);

else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                    knapSack(W, wt, val, n-1) );
}

int main()
{
    int val[1000];
    int wt[1000];
    int total;
    int n,i;
    cout<<"Enter total weight :"<<endl;
    cin>>total;
    cout<<"Enter number of total items :"<<endl;
    cin>>n;
    cout<<"Enter the values and weights :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Profit "<<i+1<<":";cin>>val[i];
        cout<<"Weight "<<i+1<<":";cin>>wt[i];
    }
    cout<<"Maximum Profit :";
    cout<<knapSack(total, wt, val, n);
    return 0;
}
