#include<iostream>
#include<stack>
using namespace std;
int head=0,k=0;
int data[100000],next[100000];
stack<int> avail;

void insert_node(int x)
{
    int i;
    int index;
    index=head;
    cout<<"Enter "<<x<<" numbers :"<<endl;
    for(i=0;i<x;i++)
    {
        cin>>data[index];
        next[k++]=avail.top();
        index=avail.top();
        avail.pop();
    }
}

void show()
{
    int index=head,t=0;
    cout<<"The elements are :"<<endl;
    while(t!=k)
    {
        cout<<data[index]<<" ";
        index=next[t++];
    }
    cout<<endl;
}

int main(){

     int n,x;
     cout<<"Enter how many numbers to add in the list :"<<endl;
     cin>>n;
     cout<<"Enter the available indexes in the stack :"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         avail.push(x);
     }
     for(int i=0;i<=n;i++)
        next[i]=-1;
     cout<<"Enter how many numbers to add :"<<endl;
     cin>>x;
     insert_node(x);
     show();

    return 0;
}

