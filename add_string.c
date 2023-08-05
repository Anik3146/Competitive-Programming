#include<stdio.h>

int main()
{
    char str1[200],str2[100];
    int i,j;
    gets(str1);
    gets(str2);
    int l=strlen(str1);
    for(i=0;i<strlen(str2);i++)
    {
        str1[l++]=str2[i];
    }
    str1[l]='\0';
    printf("%s",str1);

    return 0;
}
