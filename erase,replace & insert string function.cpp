#include<iostream>
#include<string>
using namespace std;
//main
int main()
{
    string s("Sam is a fame and game of am!!");
    string s1("Sam is a fame and game of am!!");
    string s2("I am Nazmul Hossain Fantastic");
    cout<<s.erase(13)<<endl;
    cout<<s1.replace(13,9," Crap")<<endl;
    cout<<s2.insert(20,"Anik ")<<endl;
    return 0;
}
