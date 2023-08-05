#include<iostream>
#include<math.h>

using namespace std;

int derangement(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 0;
    else
        return ((n-1)*derangement(n-1))+((n-1)*derangement(n-2));
}

int main(){

    cout<<derangement(4)<<endl;
    return 0;
}

