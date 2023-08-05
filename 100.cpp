#include<iostream>
using namespace std;

int main()
{
    int i,j,max,count;
    while(cin>>i>>j){
    int p,q;
    p=(i<=j?i:j);
    q=(i<=j?j:i);
    max=0;
    for(int n=p;n<=q;n++){
    int t=n;
    count=0;
    for(;;){
        if(t==1)
        {
            count++;
            break;
        }
    if(t%2==0)
    {t=t/2;
    count++;}
    else
    {t=(3*t)+1;
        count++;}

    }
        if(max<count)
            max=count;
    }
    cout<<i<<" "<<j<<" "<<max<<endl;}
    return 0;
}
