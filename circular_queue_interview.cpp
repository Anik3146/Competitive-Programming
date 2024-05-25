#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)

struct circularQueue{
	int front,back,size,capacity;
	vector<int>a;
	circularQueue(int x): front(-1), back(-1), size(0), capacity(x), a(x){};
	bool isEmpty()
	{
		return size==0;
	}
	bool isFull()
	{
		return size == capacity;
	}
	void enqueue(int x)
	{
		if(isEmpty())
		{
			front=0;
		}
		if(isFull())
		{
			cout<<"queue is full"<<endl;
			return;
		}
		back=(back+1)%capacity;
		a[back]=x;
		size++;

	}
	void dequeue()
	{
		if(isEmpty())
		{
			cout<<"Queue is empty"<<endl;
		}
		else
		{
			size--;
			front =(front+1)%capacity;
			if(isEmpty())
			{
				back=-1;
				front=-1;
			}
		}
	}
	void showFront()
	{
		if(isEmpty())
		cout<<"Queue is empty"<<endl;
		else
		cout<<a[front];
	}
	void showBack()
	{
		if(isEmpty())
		cout<<"Queue is empty"<<endl;
		else
		cout<<a[back];
	}
};

void tc()
{   
	circularQueue *obj = new circularQueue(3);
	obj->enqueue(1);
	obj->enqueue(2);
	obj->enqueue(3);
	obj->dequeue();
	obj->enqueue(4);
	obj->dequeue();
	obj->dequeue();
	obj->enqueue(5);
	obj->enqueue(6);
	obj->enqueue(5);



	
	obj->showFront();
	cout<<" ";
	obj->showBack();

	delete obj;
	
}

	
int main()
{
	//freopen("blist.in", "r", stdin);
	//freopen("blist.out", "w", stdout);
    IOS
	//ll t; cin>>t; while(t--)
	
 	tc();

    return 0;
};