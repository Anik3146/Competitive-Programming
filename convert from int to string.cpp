#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    stringstream ob;
    ob<<a;
    string st = ob.str();
    cout<<st;
    return 0;
}

