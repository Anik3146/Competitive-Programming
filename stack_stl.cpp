#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> sta;
    sta.push(1);
    sta.push(2);
    sta.push(3);
    cout<<sta.size()<<endl;
    while(!sta.empty())
    {
        cout<<"Popping :"<<sta.top()<<endl;
        sta.pop();
    }
    return 0;
}
