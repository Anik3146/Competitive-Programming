#include<iostream>
#include<stack>
using namespace std;

int p[100];
int find_p(int x)
{
    if(p[x]==x)
        return x;
        return p[x]=find_p(p[x]);
}
void Union(int a,int b)
{
    p[find_p(b)]=find_p(a);
}
int main()
{
    for(int i=0;i<100;i++)
        p[i]=i;
        Union(1,2);
        cout<<find_p(2);
    return 0;
}

