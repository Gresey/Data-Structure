#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void bubblesort(int a[],int n);
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
	bubblesort(a,n);
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
void bubblesort(int a[],int n){

	for(int p=0;p<=n-2;p++){ //pass run for n-1 times
		for(int c=0;c<=n-2-p;c++){
			if(a[c]>a[c+1]){
				swap(a[c],a[c+1]);
					
			
		    }
	   }
	 
	   }
    
	}


