#include<bits/stdc++.h>
using namespace std;


int arr[8]={7,31,25,13,3,1,5,17}, Left[8]={4,2,3,-1,5,-1,-1,-1}, Right[8]={1,-1,-1,7,6,-1,-1,-1};

void Traverse_Inorder(int x)
{
    if(Left[x]!=-1){
        Traverse_Inorder(Left[x]);
    }
    printf("%d\n",arr[x]);
    if(Right[x]!=-1){
        Traverse_Inorder(Right[x]);
    }
}

int main()
{
	Traverse_Inorder(0);
}
