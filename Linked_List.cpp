#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node *start = NULL;

void insert_at_beginning(int data){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL){
		cout<<"Heap exhausted";
		return;
	}
	temp->data=data;
	temp->next= start;
	start=temp;
}
 
void insert_at_end(int data){
	if(start==NULL){
		insert_at_beginning(data);
		return;
	}
	struct node *to_be_inserted=(struct node *)malloc(sizeof(struct node));
	if(to_be_inserted==NULL){
		cout<<"Heap exhausted";
		return;
	}
	struct node *temp=start;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	to_be_inserted->data=data;
	to_be_inserted->next=temp->next;
	temp->next=to_be_inserted;
}

void insert_at_pos(int data, int pos){
	struct node *to_be_inserted=(struct node *)malloc(sizeof(struct node));
	if(to_be_inserted==NULL){
		cout<<"Heap exhausted";
		return;
	}
	struct node *temp=start;
	int count=0;
	while(temp->next!=NULL){
		temp=temp->next;
		count=count+1;
	}
	cout<<"\ntotal nodes : "<<count<<endl;
	
	if(pos==0){
		insert_at_beginning(data);
		return;
	}
	else if(pos>count){
		insert_at_end(data);
		return;
	}
	else{
		struct node *temp2=start;
		for(int i =0; i<pos-1;i++){
			temp2=temp2->next;
		}
		to_be_inserted->data=data;
		to_be_inserted->next=temp2->next;
		temp2->next=to_be_inserted;
	}
}

void showAll(){
	struct node *temp = start;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void rev(struct node *temp){
	if(temp==NULL){
		return;
	}
	rev(temp->next);
	cout<<temp->data<<" ";
}
void showAll_in_Reverse(){
	rev(start);
}


int main(){
	//BASIC LINKED LIST CREATION
//	struct node *head= (struct node*)malloc(sizeof(struct node));
//	struct node *node1= (struct node*)malloc(sizeof(struct node));
//	struct node *end= (struct node*)malloc(sizeof(struct node));
//	
//	head->data=5;
//	head->next=node1;
//	node1->data=10;
//	node1->next=end;
//	end->data=15;
//	end->next=NULL;
//	
//	struct node *temp = head;
//	while(temp!=NULL){
//		cout<<temp->data<<" ";
//		temp=temp->next;
//	}
	insert_at_end(10);
	insert_at_beginning(12);
	showAll();
	cout<<"\n";
	insert_at_beginning(8);
	showAll();
	cout<<"\n";
	insert_at_end(1);
	showAll();
	cout<<"\nReverse: ";
	showAll_in_Reverse();
	//cout<<"\nInsert at pos:";
	insert_at_pos(100,2);
	showAll();
	return 0;
}

