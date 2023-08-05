
#include<bits/stdc++.h>
#define left 2*r
#define right (2*r)+1
using namespace std;

int tree[1000];
int root=1;
int last_value_space=0;
int next_value_space=0;

void heapify(int r)
{
    if(tree[left]==-1 && tree[right]==-1)
    {
        if(left/2==1)
        {

        }
        else
        {
            if(tree[left/2]>tree[left/4])
                swap(tree[left/2],tree[left/4]);
        }
    }
    else if(tree[left]!=-1 && tree[right]==-1)
    {
        heapify(left);
    }
    else if(tree[left]==-1 && tree[right]!=-1)
    {
        heapify(right);
    }
    else if(tree[left]!=-1 && tree[right]!=-1)
    {
        heapify(left);
        heapify(right);
        if(tree[left]>tree[r])
        {
            swap(tree[left],tree[r]);
        }
        if(tree[right]>tree[r])
        {
            swap(tree[right],tree[r]);
        }
    }

}


int main()
{
    int i,n,x;
    for(i=0;i<1000;i++)
    {
        tree[i]=-1;
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>tree[i];
    }
    last_value_space=n;
    heapify(root);
    cout<<"Max Heapified Values :";
    for(i=1;i<=n;i++)
    {
        cout<<tree[i]<<" ";
    }

    return 0;
}
