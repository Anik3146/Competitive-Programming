#include<stdio.h>
#include<math.h>
int main()
{
    int p,n,i=1;float a;
    while(scanf("%d",&n))
    {

            if(n==-1)
                break;
            a=(log(n)/log(2));
            p=(log(n)/log(2));
            if(p<a)
            p=a+1;
            else
                p=a;

        printf("Case %d: %d\n",i,p);
        i++;

    }

    return 0;
}

