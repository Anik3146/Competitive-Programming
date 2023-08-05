#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> G[],int u,int v)
{
    G[u].push_back(v);
}

void print_graph(vector<int>G[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"For Node "<<i<<":";
        if(!G[i].empty()){
            for(int j=0;j<G[i].size();j++)
            {
                cout<<i<<"->"<<G[i][j]<<",";
            }
            cout<<endl;
        }
    }
}

int main()
{
    vector<int> G[100];
    int i,j,n,u,v;
    cout<<"Enter number of vertex :";
    cin>>n;
    for(;;)
    {
        cout<<"Enter adjacent nodes :";
        cin>>u;
        if(u==-1)
            break;
        cin>>v;
        add_edge(G,u,v);
    }

    print_graph(G,n);

    return 0;
}

