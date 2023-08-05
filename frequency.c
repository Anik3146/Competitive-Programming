#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0;
    char c[1000];
    char p;
    gets(c);
    scanf("%c",&p);
    for(i=0;i<strlen(c);i++)
        if(c[i]==p) count++;

    printf("%d",count);
    return 0;
}
