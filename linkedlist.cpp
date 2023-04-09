#include <iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node(int data )
{
  this->data=data;
  this->next=NULL;
}
};

void insertt(Node*&h,Node*&l,int data)
{
  if(h==NULL)
  {
    Node*kast=new Node(data);
    h=kast; 
    l=kast;
    return;
  }
  Node*last=new Node(data);
  l->next=last;
  l=last;
  
}
  void inserth(Node* &head,int data)
  {
    
    Node*newnode=new Node(data);
    newnode->next=head;
    head =newnode;
    
  }
void inserta(Node* &had,Node*&tail,int data ,int pos)
{
  if(pos==NULL)
  {
    inserth(had,data);
    return;
  }
  if(had==NULL)
  {
    Node* newnode=new Node(data);
    had=newnode;
    tail=newnode;
    return;
  }
  int i=1;
  Node*prev=had;
  while(i<pos)
    {
      prev=prev->next;
      i++;
    }
  Node* curr=prev->next;
     Node*that=new Node(data);
  that->next=curr;
  prev->next=that;
  
    }


void printl(Node*head)
{
  Node*temp=head;
  while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }

}
int main() {
  Node* first=new Node(10);
  Node* second=new Node(20);
  Node* third =new Node(30);
  Node* last =new Node(22);
  first-> next=second;
  second->next =third;
  third->next =last;
  inserth(first,10);
  inserth(first,1010101010);
  insertt(first,last,99);
  inserta(first,last,110,4);
  printl(first);
}