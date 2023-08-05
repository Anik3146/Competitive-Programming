#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int num = 100; // a variable of int data type

  string str; // a variable of str data type

  // using the stringstream class to insert an int and
  // extract a string
  stringstream ss;
  ss << num; //will give int output
  ss >> str; //string variable will take int input

  cout << "The integer value is " << num << endl;
  cout << "The string representation of the integer is " << str << endl;
}
