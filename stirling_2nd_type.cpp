#include<iostream>
#include<math.h>

using namespace std;

int stirling_second_type(int n,int k)
{
    if(n==k)
        return 1;
    else if(k==1)
        return 1;
    else
        return (stirling_second_type(n-1,k-1)+(k*stirling_second_type(n-1,k)));
}

int main(){

    cout<<stirling_second_type(3,2)<<endl;
    return 0;
}

