#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(a) (a).begin(),(a).end()
#define endl "\n" 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)

struct listNode{
	int value;
	listNode *next;
	listNode() : value(0), next(nullptr){}
	listNode(int x) : value(x), next(nullptr){}
	listNode(int x, listNode *next) : value(x), next(next){}
};


class linkedList{
	private:
	listNode *head;

	public:
	linkedList(): head(nullptr) {}
	~linkedList(){
		listNode *ptr = head;
		while(ptr!=nullptr)
		{
			listNode *temp = ptr;
			ptr = ptr->next;
			delete temp;
		}
	}

	void insertValue(int value1, int value2){
		if(head==nullptr)
		{
			listNode *n = new listNode(value2);
			head = n;
		}
		else
		{
			listNode *prev=head;
			listNode *ptr=head;
			while(ptr!=nullptr)
			{
				if(ptr->value==value1)
				{
					listNode *n = new listNode(value2);
					n->next=ptr->next;
					ptr->next = n;
					return;
				}
				prev = ptr;
				ptr=ptr->next;
			}
			prev->next = new listNode(value2);
		}

	}

	
	void deleteNode(int val)
	{
	listNode *prev = head;
	listNode *ptr = head;

	if(ptr->value == val)
	{
		ptr->value = ptr->next->value;
		ptr->next = ptr->next->next;
		return;
	}

	while(ptr!=nullptr)
	{
		if(ptr->value == val)
		{
			break;
		}
		prev = ptr;
		ptr=ptr->next;
	}
	prev->next = ptr->next;
	delete ptr;
	}

	void show()
	{
	while(head!=nullptr)
	{
		cout<<head->value<<" ";
		head=head->next;
	}
	}


};





void tc()
{
	
	linkedList obj;
	obj.insertValue(10,10);
	obj.insertValue(10,20);
	obj.insertValue(1,30);
	obj.insertValue(20,40);
	obj.insertValue(2,40);
	obj.deleteNode(40);
	obj.insertValue(40,50);
	obj.deleteNode(50);
	obj.deleteNode(10);

	obj.show();
	

	
	
}


	
int main()
{
	//freopen("blist.in", "r", stdin);
	//freopen("blist.out", "w", stdout);
    IOS
	//ll t; cin>>t; while(t--)
	
 	tc();

    return 0;
}