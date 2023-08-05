#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

int tree[100];
void search_tree(int x,int current);
void insert_tree(int x,int current);
void tree_traverse(int current);

using namespace std;

int main()
{
    int i,a,b,n,t;
    for(i=0;i<100;i++)
    {
        tree[i]=-1;
    }
    cout<<"Enter how many numbers you want as inputs to create a tree :"<<endl;
    cin>>n;
    int root=1;
    cout<<"Enter elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>t;
        insert_tree(t,root);
    }
    cout<<"Enter an element to check whether it's in the tree or not :"<<endl;
    cin>>a;
    search_tree(a,root);
    tree_traverse(root);
    return 0;
}

void insert_tree(int x,int current)
{
    if(tree[current]==-1)
        tree[current]=x;
    else if(tree[current]>x)
    {
        insert_tree(x,(2*current));
    }
    else if(tree[current]<x)
    {
        insert_tree(x,(2*current)+1);
    }
}
void search_tree(int x,int current)
{
    if(tree[current]==-1)
    {
        cout<<"Not found in the tree."<<endl;
    }
    else{
    if(tree[current]==x)
        cout<<"Found at position :"<<current<<endl;
    else if(tree[current]>x)
    {
        search_tree(x,(2*current));
    }
    else if(tree[current]<x)
    {
        search_tree(x,(2*current)+1);
    }
    }
}
void tree_traverse(int current)
{

    if(tree[2*current]!=-1)
    {
        tree_traverse(2*current);
    }
    cout<<tree[current]<<" ";
    if(tree[(2*current)+1]!=-1)
    {
        tree_traverse((2*current)+1);
    }
}

