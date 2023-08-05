#include<iostream>
#include<math.h>
#include<sstream>
#include<string.h>

using namespace std;

int f(int x)
{
   int p;
   p=((x+1)*x) % 11 ;
   return p;
}

int main(){
    int n,fixed,x,c=0,t,h;
    cin>>n;
    fixed=f(n);
    x=f(n);
    for(;;)
    {
        if(f(x)==fixed){
            cout<<c+1<<endl;
            break;
        }
        else
        {
            x=f(x);
            c++;
        }
    }


    return 0;
}

