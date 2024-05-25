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

void insertValue(listNode *head, int value1, int value2){

	listNode *prev=head;
	while(head!=nullptr){
	
			if(head->value == value1)
			{
				listNode *newNode = new listNode(value2);
				newNode->next = head->next;
				head->next = newNode;
				return;
			}

			prev = head;
			head = head->next;
		
	}
	prev->next = new listNode(value2);

}

void deleteNode(listNode *head, int val)
{
	listNode *prev = head;

	if(head->value == val)
	{
		head->value = head->next->value;
		head->next = head->next->next;
		return;
	}

	while(head!=nullptr)
	{
		if(head->value == val)
		{
			break;
		}
		prev = head;
		head=head->next;
	}
	prev->next = head->next;
	delete head;
}

void show(listNode *head)
{
	while(head!=nullptr)
	{
		cout<<head->value<<" ";
		head=head->next;
	}
}


void tc()
{
	
	listNode *ob1 = new listNode(10);
	listNode *ob2 =  new listNode(20);
	listNode *ob3 = new listNode(30);
	ob1->next = ob2;
	ob2->next = ob3;


	listNode *root = ob1;
	show(root);
	cout<<endl;
	insertValue(root, 10, 40);
	insertValue(root, 30, 50);
	insertValue(root,60, 70);
	deleteNode(root,10);
	show(root);
	deleteNode(root,20);
	cout<<endl;
	show(root);
	deleteNode(root,70);
	cout<<endl;
	show(root);
	

	
	
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