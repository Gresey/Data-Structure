#include<iostream>
using namespace std;
void traverse(int Q[],int f,int r,int num);
void enqueue(int Q[],int n,int &f,int &r,int num);
void dequeue(int Q[],int n,int &f,int &r,int num);
int main()
{
	int n,num=0;
	cout<<"enter size of queue:";
	cin>>n;
	int Q[n];
	int f=-1,r=-1,ch,ch1;
	do
	{
		cout<<"1.insert(enqueue)\n2 delete(dequeue)\n enter choice";
		cin>>ch;
		if(ch==1)
		{
			enqueue(Q,n,f,r,num);
		}
		else if(ch==2)
		{
			dequeue(Q,n,f,r,num);
		}
		else
		{
			cout<<"wrong choice";
		}
		cout<<"\npress 1 to continue";
		cin>>ch1;
	}
	while(ch1==1);
}
//*****************************************************************************************************
void enqueue(int Q[],int n,int &f,int &r,int num)
{
	if(r==n-1)
	{
	cout<<"overflow";
	}
	else
	{
	int item;
	cout<<"Enter item to insert:";
	cin>>item;
	Q[++r]=item;
	num++;
	traverse(Q,f,r,num);	
	}
}
//*****************************************************************************************************
void dequeue(int Q[],int n,int &f,int &r,int num)
{
	if(f==r)
	{
		cout<<"underflow";
	}
		else
		{
			int item;
			cout<<"Deleted item is"<<Q[++f];
			num--;
			traverse(Q,f,r,num);
		}
	}
//*****************************************************************************************************
void traverse(int Q[],int f,int r,int num)
{
	if(f==r)
	{
		cout<<"empty array";
	}
	else
	{
		cout<<"\n total element in queue:"<<num<<endl;
		cout<<"\n queue element are\n";
		for(int i=f+1;i<=r;i++)
		cout<<Q[i]<<" ";
	}
}
