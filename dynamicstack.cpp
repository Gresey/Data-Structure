#include<iostream>
using namespace std;

void push();
void pop();
void traverse();
void getnode();
struct stack{
	int info;
	stack* next;
};
stack* bottom=NULL,top=NULL,newn,temp;
int main(){
	int ch,ch1;
	cout<<"Operations:";
	do{
		cout<<"Operations:\n 1.push\n 2.pop";
		cin>>ch; 
		switch(ch)
        {
        	case 1:
        	
        		push();
        		traverse();
        		break;
	        case 2:
	        	pop();
	        	traverse();
	        	break;
	        	
	        default:
	        	cout<<"invalid choice";
	        	break;
	}
	cout<<"enter 1 to continue";
	cin>>ch1''
		}while(ch1==1);
}
void getnode(){
	newn=new stack;
	cout<<"enter the data\n";
	cin>>newn->info;
	newn->next=NULL;
}
void pop(){
if(top==NULL)  cout<<"underflow condition";
else if(top==bottom) {
    top=NULL; 
    bottom=NULL; 
    n--;}
else
{
temp=bottom;
while(temp->nextn != top) temp=temp->nextn;	
temp->nextn=NULL;   top=temp; n--;
}
}
void push(){
    if(newn==NULL) cout<<"\noverflow condition";
else if(top==NULL) 
{
  ++n; 
  bottom=newn; 
  top=newn;
}
else{ ++n; 
top->nextn=newn; 
top=newn;}
}
	

void traverse()
{

cout<<"Number of elements= "<<n<<"\n";
if(bottom==NULL) cout<<"empty list\n";
else
{temp=bottom; 
for(int i=1;i<=n;i++)
{cout<<temp->info<<" ";   
temp=temp->nextn;}
}

}
