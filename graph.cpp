#include<iostream>
#include<math.h>
#include<stack>
#include<vector>
#include<list>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *AdjList;
    public:
    Graph(int v)
    {
        V=v;
        AdjList=new vector<int>[V]; //Array of linked list of size V

    }
    void AddEdge(int u,int v,bool bidir=true)
    {
        AdjList[u].push_back(v);
        if(bidir)
            AdjList[v].push_back(u);
    }
    void PrintAdjList()
    {
        for(int i=0;i<V;i++)
            {
                cout<<i<<"->";
                for(int node=0;node<AdjList[i].size();node++)
                {
                    cout<<AdjList[i][node]<<",";
                }
                cout<<endl;
            }
    }
};

int main(){

    Graph ob(4);
    ob.AddEdge(0,1);
    ob.AddEdge(0,2);
    ob.AddEdge(0,3);
    ob.AddEdge(1,3);
    ob.AddEdge(3,2);
    ob.PrintAdjList();

    return 0;
}


