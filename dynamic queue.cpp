#include<iostream>
using namespace std;

struct Q
{
int info; 
Q* next;
};
Q *newn, *temp, *front=NULL, *rear=NULL; 
int count=0, ch1,ch2;

void Enqueue();
void Dequeue();
void getnode();
void traverse();


int main()
{
	cout<<"Operations on Queue\n";
	do
	{
		cout<<"1.Insert\n2.Delete\n3.Traverse\nenter your choice\n"; 
		cin>>ch1;
		if(ch1==1) Enqueue();
		else if(ch1==2) Dequeue();
		else if(ch1==3) traverse();
		else cout<<"\n\nInvalid Choice\n";
		cout<<"\nPress 1 to continue"; cin>>ch2;
	}while(ch2==1);
	return 0;
}

void getnode()
{newn=new Q;
cout<<"Enter Data";
 cin>>newn->info; 
newn->next=NULL;
}

void traverse()
{cout<<"the Queue is\t";
if(front==NULL) cout<<"\nempty Queue";
else
{temp=front; while(temp!=NULL) {cout<<temp->info<<" "; temp=temp->next;}}

}

void Enqueue()
{   getnode(); 
	if(newn==NULL) cout<<"\nOverflow\n";
	else if(front==NULL) { ++count; front=newn; rear=newn; traverse(); }
	else  {++count; rear->next=newn; rear=newn;  traverse();}
}
	
void Dequeue()
{
if(front==NULL) cout<<"\nunderflow\n";
else
{ --count; 
cout<<"\nthe Element deleted is"<<front->info; 
front=front->next; traverse();}
}
