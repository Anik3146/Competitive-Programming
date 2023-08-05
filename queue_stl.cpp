#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    cout<<"Enqueuing :"<<endl;
    for(unsigned int i=1;i<11;i++)
    {
        q.push(i);
    }
    cout<<"Queue size :"<<q.size()<<endl;
    cout<<"Back of queue :"<<q.back()<<endl;
    cout<<"Dequeuing :"<<endl;
    cout<<"front :"<<q.front()+9<<endl;
    while(!q.empty())
    {
        cout<<"dequeuing :"<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
