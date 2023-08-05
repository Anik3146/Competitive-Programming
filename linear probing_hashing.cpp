#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x,n,a[100];
    for(int i=0;i<100;i++)
    {
        a[i]=0;
    }
    cout<<"Enter how many numbers to sort :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number :";
        cin>>x;
        if(a[x%n]==0)
        {
            a[x%n]=x;

        }

        else
        {
             int t;
            t=x%n;
            while(a[t]!=0)
            {
                t++;
            }
            a[t]=x;

        }
        cout<<endl;
    }
    cout<<"Enter a number to search within the array :";
    cin>>x;
    if(a[x%n]==x)
        {
            cout<<a[x%n]<<" is at position "<<x%n<<endl;
        }

        else
        {
             int t;
            t=x%n;
            while(a[t]!=x)
            {
                t++;
            }
            cout<<a[t]<<" is at position "<<t<<endl;

        }
        cout<<endl;

    return 0;

}

