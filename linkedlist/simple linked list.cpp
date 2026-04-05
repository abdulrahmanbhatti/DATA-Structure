#include<iostream>
using namespace std;
 struct Node {
	int item ;
	Node*next;
};
Node*head = NULL;
Node*last = NULL;
void creation (int value ){
	Node*Tnode=new Node ();
	Tnode->item=value ;
	Tnode->next= NULL;
	if ( head == NULL){   
		last = Tnode ;
		head = Tnode ;
	}
	else {
		last->next = Tnode ;
		last=Tnode ;	
	}

//	cout <<" do you want to enter more item y/n"<<endl;
//	cin>>ch;

}
void display(){
	if ( head == NULL)
	cout<< " list not exist "<<endl;
	else {
			Node*Tnode = head;
		    while (Tnode != NULL){
			cout <<" --->"<<Tnode->item;
			Tnode = Tnode->next;
		}
	}  
}
void insertFirst(int value ){
	if ( head !=NULL){
	    Node*Tnode=new Node ();
	    Tnode->item=value ;
	    Tnode->next=head;
	    head = Tnode;
	}
	else{
		cout<<" list is not exit "<<endl;
		
	}
}
void insertEnd(int value ){
	if( head != NULL ){
		Node*curnode=head;
		while ( curnode->next !=NULL){
			curnode= curnode->next;
		}
		  Node*Tnode=new Node ();
		  Tnode->item=value;
		  Tnode->next=NULL;
		  curnode->next=Tnode;
				
	}
	else{
		cout<<" list is not exit "<<endl;
	}
	
}
int main (){
	int choice ;
	int value ;
	do {
	
	cout <<" \n Enter 1 for Creat node "<<endl; 
	cout <<" Enter 2 for display linked list "<<endl;
	cout <<" Enter 3 for insert item at  first "<<endl;
	cout<< " Enter 4 for  item insert at end"<<endl;
	cout<< " Enter 5 for EXIT PROGRAM "<<endl;
	cout <<" Enter your choice "<<endl;
	cin>>choice ;
	switch ( choice ){
		case 1 :
			cout <<" wellcome your choice is Creating node "<<endl;
			cout <<" enter value "<<endl;
			cin>>value ;
			creation(value);
			break;
		case 2 :
		    cout <<" wellcome your choice is display linked list  "<<endl;
			display();
			break;
		case 3 :
			cout << " wellcome your choice is insert item at  first "<<endl;
			cout <<" enter value "<<endl;
			cin>>value ;
			insertFirst(value);
			break;
		case 4 :
			cout <<" wellcome your choice is insert item at end "<<endl;
			cout <<" enter value "<<endl;
			cin>>value ;
			insertEnd(value);
			break;
			
		case 5  :
		    cout <<" PROGRM EXIT "<<endl;
			break;		
					
}
    }while ( choice !=5 );
}
