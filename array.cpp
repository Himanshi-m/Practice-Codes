#include<iostream>
using namespace std;
#define capacity 7
int sz=3;

void display(int arr[]){
	cout<<endl;
	for(int i=0;i<sz;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void insert_at_end(int arr[],int x){
	arr[sz]=x;
	sz++;
	cout<<"Insert at end: ";
	display(arr);

}

void insert_at_beg(int arr[],int x){
	if(sz==0){
		arr[0]=x;
	}
	else{
		for(int i=sz;i>=0;i--){
			arr[i+1]=arr[i];
		}
		arr[0]=x;
	}
	sz++;
	cout<<"Insert at beginning: ";
	display(arr);
}
void insert_at_index(int arr[],int x,int index){
	if(index==0){
		insert_at_beg(arr,x);
	}
	else if(index==capacity){
		cout<<"array is full";
	}
	else if(index=sz){
		insert_at_end(arr,x);
	}
	else{
		for(int i=index;i<=sz;i++){
			arr[i+1]=arr[i];
		}
		arr[index]=x;
		sz++;
	}
	cout<<"Inserting at index: ";
	display(arr);
}
bool chkunderflow(){
	if(sz==0){
		cout<<"Underflow";
		return true;
	}
	return false;
}
void delete_at_beginning(int arr[]){
	if(chkunderflow()){
		return;
	}
	else{
		for(int i=0;i<sz;i++){
			arr[i]=arr[i+1];
		}
		sz--;
	}
	cout<<"After deleting at beginning: ";
	display(arr);
}
void delete_at_end(int arr[]){
	if(chkunderflow()){
		return;
	}
	else{
		sz--;
	}
	cout<<"After deleting at end: ";
	display(arr);
}
void delete_at_pos(int arr[],int pos){
	if(chkunderflow()){
		return;
	}
	else{
		for(int i=pos;i<sz;i++){
			arr[i]=arr[i+1];
		}
		sz--;
	}
	cout<<"After deleting at position: ";
	display(arr);
}
int main(){
	int a[capacity];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	delete_at_pos(a,1);
	delete_at_end(a);
	delete_at_beginning(a);
	delete_at_end(a);
}
