#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void prime(int n)
{
    int i;
    if(n==2)
        printf("%d",n);
    else if(n>2)
    {
        for(i=2;i<100;i++)
        {
            if(n%i==0 && n!=i )
                break;
            else if(n%i!=0)
                continue;
            else
                {
                    printf(" %d",n);
                    break;
                }
        }
    }

}

int main()
{
    int n,i;
    int a[100];
    int count=0;
    for(i=0;i<100;i++)
    {

        a[i]=i;
    }
    printf("Prime: ");
    for(i=0;i<100;i++)
    {
        prime(a[i]);
    }

    return 0;
}

