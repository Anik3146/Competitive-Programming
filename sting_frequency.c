#include<stdio.h>
#include<string.h>

int main(){

    char str[1000];
    char find_str[20];
    gets(str);
    scanf("%s",find_str);
    int i,j,l,count_=0,flag=0;
    for(i=0;i<strlen(str);i++)
    {
        l=i;
        flag=0;
        if(str[i]==find_str[0])
        {
            for(j=0;j<strlen(find_str);j++)
            {
                if(find_str[j]==str[l++])
                    flag++;
            }
            if(flag==strlen(find_str))
                count_++;
        }
    }
    printf("%d\n",count_);
    return 0;
}
