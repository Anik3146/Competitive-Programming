#include<iostream>
#include<string>
using namespace std;
//main
int main()
{
    string s("Sam is a fame and game of am!!");
    cout<<s.find("am")<<endl;
    cout<<s.rfind("am");
    return 0;

}
