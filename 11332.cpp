#include<iostream>

using namespace std;

int f(int n)
{
    int sum=0,t;
    while(n>0)
    {
        t=n%10;
        n=n/10;
        sum=sum+t;
    }

    if((sum/10)>0)
    return f(sum);
    else
    return sum;

}


int main()
{
    int n,t;
    int i=0;
    for(;;)
    {
        cin>>n;
        if(n==0)
            break;
        cout<<f(n)<<endl;
    }

    return 0;
}
