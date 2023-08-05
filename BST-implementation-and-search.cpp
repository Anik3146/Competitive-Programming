#include<bits/stdc++.h>
using namespace std;

vector < int > a(500, -1);
int root=1;

bool Binary_search_tree(int x){
    int i=1;
    while(1){
        if(a[i]==x)return true;
        else{
            if(a[i]>x){
                if(a[2*i]==x)return true;
                else i++;
            }
            else{
                if(a[(2*i)+1]==x)return true;
                else i++;
            }
        if(a[2*i]==-1&&a[(2*i)+1]==-1)return false;
        }
    }
}

void Input(int x)
{
    int k=root;
    while(1){
       if(a[k]<x&&a[(2*k)+1]==-1){
        a[(2*k)+1]=x;
        break;
       }
       if(a[k]>x&&a[(2*k)]==-1){
        a[(2*k)]=x;
        break;
       }
       k++;
    }
}

int main()
{
    int i, x;
    for(int i=1; i<=7; i++){
        cin >> x;
        if(i==1)a[i]=x;
        else Input(x);
    }

    for(i=1; i<=20; i++){
        cout << "Enter Your number for search : ";
        cin >> x;
        if(Binary_search_tree(x)==true){
            cout << "Found "<< endl;
        }
        else {
            cout << "Not Found " << endl;
        }
    }
    return 0;
}
