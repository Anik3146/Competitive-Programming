#include<iostream>
#define n 4
using namespace std;

int f=-1;
int r=-1;
int a[n];

void enqueue();
void dequeue();
void display();


int main()
{
    int s;
    cout<<"Press 1 to enqueue\npress 2 to dequeue\npress 3 to display\npress any other number to terminate the process:\n"<<endl;
    for(;;){
    int j=0;
    cin>>s;
    switch(s)
    {
        case 1:enqueue();
                break;
        case 2:dequeue();
                break;
        case 3:display();
                break;
        default:cout<<"The process has been terminated"<<endl;
                {
                    j++;
                    break;
                }
    }
    if(j>0)
        break;
    }
    return 0;
}
void enqueue()
{
    int x;
    cout<<"Enter any number to enqueue:"<<endl;
    cin>>x;
    if(r==(n-1))
    {
        r=0;
        if(f==0)
        {
           r=n-1;
           cout<<"Queue full"<<endl;
        }
        else
        {
        a[r]=x;
        }
    }
    else if(r+1==f)
    {
        cout<<"Queue full"<<endl;
    }
    else
        {
        r=r+1;
        a[r]=x;
        if(r==0 && f==-1)
            f=0;
        }
}

void dequeue()
{
    if(f==r)
    {
        cout<<"Queue Empty"<<endl;
    }
    else if(f==n-1)
    {
        f=0;
        if(r=0)
        {
            cout<<a[r]<<" has been deleted"<<endl;
        }

    }
    else
    {

        cout<<a[f]<<" has been deleted"<<endl;
        f=f+1;
    }
}
void display()
{
    int i;
    cout<<"The remaining elements are: ";
    for(i=f;i<=r;i++)
    {
        cout<<a[i]<<" ";
        if(i==n-1 && f==n-1)
        {
            i=0;
        }
    }
}

