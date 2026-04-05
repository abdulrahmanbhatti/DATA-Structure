#include<iostream>
using namespace std;
struct Node {
	int item ;
	Node* Next;
};
Node*head = NULL;
Node*last = NULL;
void creatrNode(int value ){
	Node*Tnode=new Node;
	Tnode->item=value ;
	Tnode->Next=NULL;
	if ( head == NULL){
		head = Tnode ;
		last = Tnode ;
		
	}
	else {
		last->Next=Tnode ;
		last=Tnode ;
	}
}
void firstInsert(int value ){
	if ( head !=NULL){
		Node*Tnode = new Node();
		Tnode->item = value ;
		Tnode->Next = head ;
		head =Tnode ;
	}
	else {
		cout<<" list is not exit "<<endl;
	}
	
}
void lastInsert(int value ){
	if (head != NULL){
		Node*curNode=head;
		while ( curNode->Next !=NULL){
			curNode=curNode->Next;
		}
		Node*Tnode = new Node();
		Tnode->item = value ;
		Tnode->Next= NULL;
		curNode->Next=Tnode;
	}
	else { 
	cout<<" list is not exit "<<endl;
	}
}
void display( ){
	if ( head == NULL){
		cout<<" list is not exit "<<endl;
	}
	else{
		Node* Tnode = head ;
		while ( Tnode !=NULL){
			cout<<"--->"<<Tnode->item;
			Tnode = Tnode->Next;
		}
	}
	
}
int main (){
	int value ;
	int choice ;
	do{
	
	cout <<"\n Enter 1 for creating list "<<endl;
	cout<<" Enter 2 for insert item at the  first"<<endl;
	cout<<" Enter 3 for insert item at the end "<<endl;
	cout<<" Enter 4 for display item"<<endl;
	cout<<" Enter 5 for EXIT PROGRAM "<<endl;
	cout<<" Enter your choice"<<endl;
	cin>>choice ;
	switch(choice ){
		case 1 :
			cout<<" wellcome your choice is creating linked list "<<endl;
			cout<<" enter value "<<endl;
			cin>>value ;
			creatrNode(value );
			break;
		case 2 :
			cout<<"wellcome your choice is insert item at first "<<endl;
			cout<<" enter value "<<endl;
			cin>>value ;
			firstInsert(value);
			break;
		case 3:
			cout <<" wellcome your choice is insert item at end"<<endl;
			cout<<" enter value "<<endl;
			cin>>value ;
			lastInsert(value);
			break;
		case 4:
			cout<<" wellcome your choice is display linked list"<<endl;
			display();
			break;
		case 5 :
			cout<<" PROGRAM EXIT "<<endl;
			break;
			
	}
}while(choice !=5);
	
	
}
