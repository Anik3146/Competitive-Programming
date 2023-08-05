#include<stdio.h>
#include<stdint.h>
#include<math.h>
#define p 2*pow(10,5)

int x=p;
int main()
{
    int i,sum,j,n,flag;
    long int count;
    int a[x];
    long long int T;

    while(scanf("%lld %lld",&n,&T)==2){
            count=0;sum=0,flag=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==T)
        {
            count=i;
            flag++;
            break;

        }
        sum=sum+a[i];
        if(sum>T)
        {
            flag++;
            count=i-1;
            break;
        }
        if(sum==T)
        {
            flag++;
            count=i;
            break;
        }

    }
    if(flag==0)
    {
        count=count+((T/sum)*n);
        T=T%n;
        if(T!=0)
        {
            i=0;
            while(T!=0)
            {
                T=T-a[i];
                if(T==0)
                {
                    count++;
                    break;
                }
                else if(T>0)
                i++;
                else
                    break;

            }
        }
    }

        printf("%ld\n",count);
    }
    return 0;
}
