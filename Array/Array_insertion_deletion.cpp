#include<iostream>
using namespace std;
#define capacity 7
int size=5;

void display(int arr[]){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

void insert_at_end(int arr[],int x){
	arr[size]=x;
	size++;
	cout<<"\nInsert at end: ";
	display(arr);

}

void insert_at_beg(int arr[],int x){
	if(size==0){
		arr[0]=x;
	}
	else{
		for(int i=size;i>=0;i--){
			arr[i+1]=arr[i];
		}
		arr[0]=x;
	}
	size++;
	cout<<"\ninsert at beginning: ";
	display(arr);
}

void insert_at_index(int arr[],int x,int index){
	if(index==0){
		insert_at_beg(arr,x);
	}
	else if(index==capacity){
		cout<<"array is full = overflow";
	}
	else if(index=size){
		insert_at_end(arr,x);
	}
	else{
		for(int i=index;i<=size;i++){
			arr[i+1]=arr[i];
		}
		arr[index]=x;
		size++;
	}
	cout<<"\nInserting at index: ";
	display(arr);
}

void deletion_at_end(int arr[]){
	if(size==0){
		cout<<"Array already empty = underflow";
	}
	else{
		size--;
	}
	cout<<"\nDeletion at end: ";
	display(arr);
}

void deletion_at_beginning(int arr[]){
	if(size==0){
		cout<<"\nArray already empty = underflow";
	}
	else{
		for(int i=0;i<size;i++){
			arr[i]=arr[i+1];
		}
		size--;
	}
	cout<<"\nDeletion_at_start: ";
	display(arr);
}

void deletion_at_pos(int arr[],int pos){
	if(pos==0){
		deletion_at_beginning(arr);
	}
	else if(pos>=size){
		deletion_at_end(arr);
	}
	else{
		for(int i=pos;i<size;i++){
			arr[i]=arr[i+1];
		}
		size--;
	}
	cout<<"\nDeletion_at index "<<pos<<":";
	display(arr);
}

int main(){
	int a[capacity];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	a[3]=4;
	a[4]=5;
	insert_at_end(a,29);
	insert_at_beg(a,100);
	insert_at_index(a,304,6);
	cout<<"\nArray : ";
	display(a);
	deletion_at_end(a);
	deletion_at_beginning(a);
	deletion_at_pos(a,1);
	deletion_at_end(a);
	deletion_at_beginning(a);
	deletion_at_end(a);
	return 0;
}
