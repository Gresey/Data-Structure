#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void insertionsort(int a[],int n);
//void swap(int &x,int &y);
int main()
{
	int n;
	cout<<"enter the size of array";cin>>n;
	int a[n];
	cout<<"enter the array elements";
	fillarray(a,n);
	cout<<"the unsorted array is\n";
	displayarray(a,n);
	cout<<"\ncalling function for sorting\n";
	insertionsort(a,n);
	cout<<"the sorted array is";
	displayarray(a,n);	
}
void fillarray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
//void swap(int &x,int &y){
//	int temp=x;
//	x=y;
//	y=temp;
//}
void insertionsort(int a[],int n){
	for(int j=1;j<=n-1;j++){
		int temp=a[j];
		int i=j-1;
		while(i>=0&&a[i]>temp){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=temp;
	}
}
  
	


