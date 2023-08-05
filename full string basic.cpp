#include<iostream>
#include<string>
using namespace std;
//main
int main()
{
    string s="Anik";
    string s1;
    cout<<s.at(2)<<endl;
    for(int x=0;x<s.length();x++)
    {
       cout<<s.at(x);
    }
    cout<<endl;
    getline(cin,s1);
    cout<<s1<<endl;

    return 0;

}
