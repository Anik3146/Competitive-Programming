#include<iostream>
#include<math.h>
#include<sstream>
#include<string.h>

using namespace std;

int main(){

    int n,r,i=0;
    char s[100];
    string str;
    cin>>n;
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        stringstream ob;
        ob<<r;
        str=ob.str();
        s[i++]=str[0];
    }
    s[i]='\0';
    cout<<strrev(s)<<endl;

    return 0;
}

