
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

 struct node *h;

 void in(int x)
 {
     int y;
     struct node *p,*q;
     q=h;
     if(q==0)
     cout<<"No heads found.";
     else
     {
         while(q!=0)
         {
             if(q->data==x)
             {
                 cout<<"Enter new data in new node :";
                 cin>>y;
                 p=new node;
                 p->data=y;
                 p->next=q->next;
                 q->next=p;
                 break;
             }
             else
                q=q->next;
         }
     }


 }
 void del(int x)
 {
     struct node *p,*q;
     q=h;
     p=0;
     if(q==0)
        cout<<"No nodes found."<<endl;
     else
     {
         while(q!=0){
         if(q->data==x)
         {
             if(q==h)
             {
                 h=h->next;
                 break;
             }
             else
             {
                 p->next=q->next;
                 delete q;
                 q=NULL;
                 break;
             }
         }
         else
         {
            p=q;
            q=q->next;
         }
     }
     }
 }


void nn(int n)
{
    struct node *p,*q;
    h=0;
    q=0;
    int x;
    for(int i=0;i<n;i++){
    cout<<"Enter data :";
    cin>>x;
    p=new node;
    p->data=x;
    if(h==0)
        h=p;
    if(q!=0)
        q->next=p;
        q=p;
    }
    q->next=0;
}
void display()
{
    struct node *p;
    p=h;
    while(p!=0)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}


int main()
{
    int n;
    cout<<"Enter how many nodes you want to enter :";
    cin>>n;
        nn(n);
    display();
    int k,l;
    cout<<"Enter to add :";
    cin>>k;
    in(k);
    display();
    cout<<"Enter where to delete :";
    cin>>l;
    del(l);
    display();

    return 0;
}

