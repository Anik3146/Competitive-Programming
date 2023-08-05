#include <iostream>
using namespace std;

int main()
{
    int x,a[100],n,r,d;
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
    cout<<"Enter the numbers of element :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a number :"<<endl;
        cin>>x;
        d=x/100;
        r=x%100;
        if((d+r)<100)
        {
            if(a[d+r]==0)
            a[d+r]=x;
            else
            cout<<"Wrong input";
        }

        else if((d+r)>=100)
        {
            int t=(d+r)/10;
            if(a[t]==0)
            a[t]=x;
        }
    }
    cout<<"The numbers are :";
    for(int i=0;i<100;i++)
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter an element to find :";
    cin>>x;
           d=x/100;
            r=x%100;
            if((d+r)<100)
            {
                if(a[d+r]==x)
                    {cout<<x<<" is found at position "<<d+r<<endl;

                    }
                else
                {
                    cout<<"Not found"<<endl;
                }
            }
            else if((d+r)>=100)
            {
                int b=(d+r)/10;
                if(a[b]==x)
                {
                    cout<<x<<" is found at position "<<b<<endl;
                }
                else{
                cout<<"Not found"<<endl;
                }
            }

    return 0;
        }

