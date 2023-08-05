#include<iostream>
using namespace std;

int main(){

    int n;
    int count=0,flag=0;
    cin>>n;
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            flag=0;
            if(n%i==0 && i==1 && n!=i)
            {
                count++;
            }
            else if(n%i!=0){
            for(int j=2;j<=i;j++)
            {
                if(i%j==0 && n%j==0)
                    flag++;
            }
             if(flag==0)
                count++;
            }
           flag=0;

        }
    }
    cout<<count<<endl;
    return 0;
}
