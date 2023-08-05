#include <bits/stdc++.h>
const int V=4;
using namespace std;

void printSolution(int color[]);

bool isSafe(
    int v, bool graph[V][V],
    int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (
            graph[v][i] && c == color[i])
            return false;
    return true;
}
bool graphColoringUtil(
    bool graph[V][V], int m,
    int color[], int v)
{
    if (v == V)
        return true;
    for (int c = 1; c <= m; c++) {
        if (isSafe(
                v, graph, color, c)) {
            color[v] = c;
            if (
                graphColoringUtil(
                    graph, m, color, v + 1)
                == true)
                return true;

            color[v] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[V][V], int m)
{

    int color[V];
    for (int i = 0; i < V; i++)
        color[i] = 0;
    if (
        graphColoringUtil(
            graph, m, color, 0)
        == false) {
        printf("Solution does not exist");
        return false;
    }

    printSolution(color);
    return true;
}

void printSolution(int color[])
{
    printf(
        "Solution Exists:"
        " Following are the assigned colors \n");
    for (int i = 0; i < V; i++)
        printf("%d ", color[i]);
    printf("\n");
}

int main()
{
    bool graph[V][V];
    cout<<"Enter values into 4*4 matrix : "<<endl;
    for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            cin>>graph[i][j];
    int m;
    cout<<"Enter number of colors : "<<endl;// Number of colors
    cin>>m;
    graphColoring(graph, m);
    return 0;
}
