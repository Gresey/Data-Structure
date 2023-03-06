#include<iostream>
#include<process.h>
using namespace std;
void push(int stack[],int item,int & top,int n);
void pop(int stack[],int & top);
void traverse(int stack[],int & top);
int main()
{
	int n;
	cout<<"Enter size of stack";
	cin>>n;
	int stack[n],ch,item;
	char ch2;
	int top=-1;
	do{
		cout<<"1 push\n2 pop\n3 exit\n 4 display stack \n Enter your choice\n:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					if(top==n-1){
					cout<<"overflow";
				}
					else
					{
						cout<<"Enter the item insert";
						cin>>item;
						push(stack,item,top,n);
						cout<<"\n"<<top<<endl;
					}
					break;
				}
			case 2:
				{
					if(top==-1){
					
					cout<<"underflow";
				    }
					else
					{
						pop(stack,top);
					}
					break;
				}
			case 3:
				{
				exit(-1);
			    }
			case 4:
				{
					traverse(stack,top);
					break;
				}
			default: 
		        {
				cout<<"invalid choice";
				}
		}
				cout<<"\n press Y/y to continue";
				cin>>ch2;
		
		}while(ch2=='y'|| ch2=='Y');

}


void push(int stack[],int item,int & top,int n)
{
	stack[++top]=item;
	n++;
}

void pop(int stack[],int & top)
{
	top--;
}

void traverse(int stack[],int & top)
{
	 if(top>=0)
	 {
	 	cout<<"stack element are\n";
	 	for(int i=top;i>=0;i--)
	 	{
	 		cout<<stack[i]<<" "<<endl;
		 }
	 	
	 }
	 else
	 {
	 	cout<<"\n stack is empty";
	 }
}



