#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n,k=1,ans,find;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
        else
        {
            for(i=0;;i++)
            {
                if(pow(2,i)>=n)
                {
                    ans=i;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",k,ans);
        k++;
    }
    return 0;
}


