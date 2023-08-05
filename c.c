#include<stdio.h>
#include<string.h>
struct string{
                char S[100][100];
                int N};
int main()
{
    struct string T[100];
    int i,j,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
     scanf("%d",&T[i].N);
     gets(T[i].S);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<T[i].N;j++)
        {
            printf("%s\n",T[i].S);
        }
    }
    return 0;
}
