#include<iostream>
#include<math.h>

using namespace std;

int fact(int n)
{
    if(n==0 ||n==1)
        return 1;
    else
        return n*fact(n-1);
}

int stirling_first_type(int n,int k)
{
    if(k==n)
        return 1;
    else if(k==1)
        return fact(n-1);
    else
        return (stirling_first_type(n-1,k-1)+((n-1)*stirling_first_type(n-1,k)));

}

int main(){

    cout<<stirling_first_type(4,2)<<endl;
    return 0;
}
