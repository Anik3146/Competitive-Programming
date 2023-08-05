#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s = "12345";

    // object from the class stringstream
    stringstream ob(s);
    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    ob >> x;

    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;

    return 0;
}
