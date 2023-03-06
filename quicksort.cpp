#include<stdlib.h>
#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void quicksort(int a[],int l,int r);
int  partition(int a[],int l,int r);
void swap(int &a,int &b);
int main(){
	int n;
   cout<<"how many random elements you want in your array";
   cin>>n;
   int a[n];	
   fillarray(a,n);
   cout<<"\n*****************************\nBefore sorting\n";
   displayarray(a,n);
   quicksort(a,0,n-1);
   cout<<"\n after sorting\n";
   displayarray(a,n);
   return 0;
   
}
void fillarray(int a[],int n)
{
	cout<<"\nenter elements to the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void displayarray(int a[],int n)
{
    for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}
}
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void quicksort(int a[],int l,int r)
{
	if(l<r)
	{
		int pos=partition(a,l,r);
		quicksort(a,l,pos-1);
		quicksort(a,pos+1,r);
	}
}
int partition(int a[],int l,int r)
{
	int i=l-1,pivot=a[r];
	for(int j=l;j<=r-1;j++)
	{
		if(a[j]<pivot)
		   swap(a[++i],a[j]);
	}
	swap(a[++i],a[r]);
	return i;
}



