#include<bits/stdc++.h>
using namespace std;


int arr[8]={7,31,25,13,3,1,5,17}, Left[8]={4,2,3,-1,5,-1,-1,-1}, Right[8]={1,-1,-1,7,6,-1,-1,-1};

void Traverse_PostOrder(int x)
{
    if(Left[x]!=-1){
        Traverse_PostOrder(Left[x]);
    }
    if(Right[x]!=-1){
        Traverse_PostOrder(Right[x]);
    }
    printf("%d\n",arr[x]);
}

int main()
{
	Traverse_PostOrder(0);
}
