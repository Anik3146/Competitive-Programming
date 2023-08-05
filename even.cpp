#include <stdio.h>

int main()
{
    long long int n,k,p,o;
    scanf("%lld %lld",&n,&k);

    if(n%2==0)
    {
        p=n/2;
    }
    else
    {
        p=(n/2)+1;
    }

    if(k<=p)
    {
        o=(2*k)-1;
    }
    else
    {
        o=(k-p)*2;
    }

    printf("%lld\n",o);



    return 0;
}
