#include <iostream>
using namespace std;

int main()
{
    int x,a[100],n,r,d;
    for(int i=0;i<100;i++)
    {
        a[i]=0;
    }
    cout<<"Enter the numbers of element :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a number :"<<endl;
        cin>>x;
        r=x%n;
        if(r<n)
        {
            if(a[r]==0)
            a[r]=x;
            else if(a[r]!=0)
            {
                while(a[r]!=0)
                {
                    r++;
                }
                a[r]=x;
            }
        }
    }
    cout<<"The numbers are :";
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter an element to find :";
    cin>>x;
            r=x%n;
            if(r<n)
            {
                if(a[r]==x)
                    {cout<<x<<" is found at position "<<r<<endl;

                    }
                else
                {
                    while(a[r]!=x && r<n)
                    {
                        r++;
                    }
                    if(a[r]==x)
                    {cout<<x<<" is found at position "<<r<<endl;

                    }
                    else
                         cout<<"Not found"<<endl;
                }
            }

    return 0;
        }


