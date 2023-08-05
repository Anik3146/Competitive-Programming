#include<iostream>
#include<cstring>
using namespace std;

template<class T>
class anik{

public:
    anik(T x)
    {cout<<x<<" is not a numeric type data"<<endl;

    }
};
template<>
class anik<char>{
public:
    anik(char x)
    {
        cout<<x<< " is a character type data"<<endl;
    }

};
template<>
class anik<string>{
public:
    anik(string x)
    {
        cout<<x<<" is a string type data"<<endl;
    }
};
int main()
{
    anik<int>ob1(20);
    anik<double> ob2(3.1416);
    anik<char>ob3('A');
    anik<string>ob4(" I am Anik ");

    return 0;
}
