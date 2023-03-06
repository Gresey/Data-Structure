#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void selectionsort(int a[],int n);
void swap(int &x,int &y);
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
	selectionsort(a,n);
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
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
void selectionsort(int a[],int n){
	       for(int i=0;i<=n-2;i++){
	       int	min=i;
	       	for(int j=i+1;j<=n-1;j++){
	       		if(a[min]>a[j]){
	       		 min=j;				  
				 }
			}
			   if(min!=i){
			   	swap(a[min],a[i]);
			   }			   
		   }     
}
    
	


