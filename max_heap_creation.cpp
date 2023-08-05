
#include<bits/stdc++.h>
using namespace std;

int tree[1000];
int root=1;
int last_value_space=0;
int next_value_space=0;

int insert_max_heap(int x,int r)
{
    if(tree[r]==-1 && last_value_space==0 && r==1)
    {
        tree[r]=x;
        last_value_space++;
        next_value_space=last_value_space+1;
    }
    else if(last_value_space!=0)
    {
        int temp;
        tree[next_value_space]=x;
        last_value_space=next_value_space;
        next_value_space=last_value_space+1;
        temp=last_value_space;
        r=last_value_space/2;
        while(tree[temp]>tree[r] && r>=1)
        {
            swap(tree[temp],tree[r]);
            temp=r;
            r=r/2;
        }

    }

}

int main()
{
    int i,j,r=root,n,x;
    cin>>n;
    for(i=0;i<1000;i++)
    {
        tree[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        insert_max_heap(x,root);
    }
    cout<<"Max heaped values :"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<tree[i]<<" ";
    }

    return 0;
}
