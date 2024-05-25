#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define all(a) (a).begin(),(a).end()
#define endl "\n"
#define pb push_back
#define mp make_pair
#define mh make_heap
#define pf push_front
#define mt make_tuple 
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
const double PI = 3.1415926535897932384626;
const ll mod = 1e9+7;
#define inf 100000002340
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second


class Node{

public:
	int data;
	Node *next;

	Node()
	{
		data=0;
		next=NULL;
	}
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}

};

class LinkedList{
	Node *head;
public:
	LinkedList()
	{
		head = NULL;
	}	
	void insertNode(int n);
	void printNode();
	void deleteNode(int n);

};

void LinkedList::insertNode(int n)
{
	Node *newNode = new Node(n);
	if(head==NULL)
	{
		head = newNode;
		return;
	}
	Node *temp = head;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
}

void LinkedList::printNode()
{
	Node *show = head;
	while(show->next != NULL)
	{
		cout<<show->data<<" "; show=show->next;
	}
	cout<<show->data<<endl;
}

void LinkedList::deleteNode(int n)
{
	Node *first, *second;
	first = head;
	while(first->next->data!=n)
	{
		first=first->next;
	}
	first->next=first->next->next;
}

void tc()
{
	
	LinkedList li;
	li.insertNode(10);
	li.insertNode(20);
	li.insertNode(30);
	li.insertNode(40);

	li.printNode();

	li.deleteNode(30);

	li.printNode();


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
