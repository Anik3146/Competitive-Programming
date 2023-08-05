#include<stdio.h>
#include<iostream>
#define max 5
using namespace std;
int top=-1;
int array[max];
void push(){
        int n,x;
        n=max;
        cin>>x;
        if(top==n-1){
            cout<<"Array is full";
        }
        else{
            top=top+1;
            array[top]=x;
        }
}
void pop(){
    if(top==-1){
        cout<<"Stuck is empty";
    }
    else{
        cout<<"The element that has been removed from the top is "<<array[top];
        top=top-1;
    }
}

int main()
{
    int s,i,a=0;

    for(;;){
    printf("\nPress 1 to push\nPress 2 to pop\nPress any integer value to terminate the process:\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:push();
                break;
        case 2:pop();
                break;
        default:
                a++;
                printf("The process is terminated.\n");
                printf("The elements which have remained in the stack are:");
                if(top==-1)
                {
                    printf("Empty.\n");
                }
                else{
                for(i=0;i<=top;i++)
                {
                    printf("%d ",stack[i]);
                }
                }

    }

                printf("\n\n");
        if(a>0)
        {
            break;
        }
    }



    return 0;
}
