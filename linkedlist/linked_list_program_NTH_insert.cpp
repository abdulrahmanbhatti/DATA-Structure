
	#include<iostream>
using namespace std;
int value ;
struct Node{
	int item ;
	Node*Next;
};
Node*head = NULL;
Node*last=NULL;
void createNode(){
	Node*Tnode= new Node();
	cout<<" Enter your value "<<endl;
	cin>>value ;
	Tnode->item = value ;
	Tnode->Next = NULL;
	if ( head == NULL){
		head=Tnode ;
		last=Tnode;
	}
	else {
		last->Next=Tnode ;
		last = Tnode ;
		
	}
	
}
void FirstInsert(){
	Node*Tnode= new Node();
	cout<<" Enter your value "<<endl;
	cin>>value ;
	Tnode->item = value ;
	Tnode->Next = NULL;
	if( head !=NULL){
		Tnode->Next = head ;
		head = Tnode ;		
	}
	else {
		cout <<" list is not exist"<<endl;
	}	
}
void lastInsert (){
	Node*Tnode= new Node();
	cout<<" Enter your value "<<endl;
	cin>>value ;
	Tnode->item = value ;
	Tnode->Next = NULL;
	if ( head !=NULL){
		Node*cnode =head ;
		while ( cnode->Next !=NULL){
			cnode = cnode->Next;
		}
		cnode->Next = Tnode ;
		
	}
	else {
		cout<<" list is not Exist"<<endl;
	}
}
void display (){
	if ( head==NULL){
		cout<<" the list is not exist"<<endl;
	}
	else {
		Node*Tnode = head;
		while ( Tnode!=NULL){
			cout<<"--->"<<Tnode->item ;
			Tnode = Tnode->Next;
		}
	}
}
void Nth_insert(){	
	if ( head != NULL){
			int position ;
			cout<<" Enter your position "<<endl;
			cin>>position ;
			Node*Tnode= new Node();
	        cout<<" Enter your value "<<endl;
			cin>>value ;
			Tnode->item = value ;
			Tnode->Next = NULL;
		if ( position == 1){
		Tnode->Next= head ;
		head = Tnode ;
		  
	      }
	         else {
				int count=0;
				Node*cnode= head ;
				while (cnode!=NULL){
				count ++;
				cnode = cnode->Next ;
			
			
			}
				if (position==count+1){
					Node*cnode= head ;
					while (cnode->Next!=NULL){
					cnode=cnode->Next;
				
			}
				cnode->Next = Tnode ;
		}
			else {
				if ( position>count+1){
				cout<<"list is not exist"<<endl;		
			}
				else {
				Node*cnode= head ;
				for ( int i =1 ; i<=position-2 ; i++){
					cnode=cnode->Next;
					
				}
				Tnode->Next = cnode->Next ;
				cnode->Next=Tnode;	
			}
			
		
	}
}
	
}

}
int main (){
	int choice ;
	do{
	cout<<"\nEnter 1 for create a node "<<endl;
	cout<<"Enter 2 for item insert at first "<<endl;
	cout<<"Enter 3 for item insert at last "<<endl;
	cout<<"Enter 4 for NTH insert "<<endl;
	cout<<"Enter 5 for display linked list "<<endl;
	cout<<"Enter 6 for EXIT THHE PROGRAM "<<endl;
	cout<<"Enter your choice "<<endl;
	cin>>choice ;
	switch (choice ){
		case 1 :
			cout<<" Wellcome your choice is creating list "<<endl;
			createNode();
			break;
		case 2:
			cout<<" Wellcome your choice is insert item the first "<<endl;
			FirstInsert();
			break;
		case 3 :
			cout <<" Wellcome your choice is insert item at the end "<<endl;
			lastInsert ();
			break;
		case 4:
			cout <<"Wellcome your choice is display linked list "<<endl;
			display ();
			break;
		case 5 :
			cout<<"Wellcome your choice is NTH insert "<<endl;
			Nth_insert();
			break;	
		case 6 :
			cout<<" PROGRAM EXIT"<<endl;
			break;
	}
}while (choice!=6);

	
}
