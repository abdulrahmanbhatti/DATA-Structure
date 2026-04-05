#include<iostream>
using namespace std;
int value ;
 struct Node {
	int item ;
	Node*next;
};
Node*head = NULL;
//Node*last = NULL;
void create_List () {
	char ch= 'y';
	while(ch == 'y'){
	Node*Tnode=new Node ();
	cout<<" enter the value "<<endl;
	cin>>value ;
	Tnode->item=value ;
	Tnode->next= NULL;
	if ( head == NULL){   
//		last = Tnode ;
		head = Tnode ;
	}
	else {
		head->next = Tnode ;
	
	}
		cout <<" do you want to enter more item y/n"<<endl;
	cin>>ch;
}

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
void insertFirst(){
	if ( head !=NULL){
	    Node*Tnode=new Node ();
	    cout<<" enter the value "<<endl;
	    cin>>value ;
	    Tnode->item=value ;
	    Tnode->next=NULL;
	    Tnode->next=head;
	    Tnode=head;
	}
	else{
		cout<<" list is not exit "<<endl;
		
	}
}
void insertEnd( ){
	if( head != NULL ){
		Node*curnode=head;
		while ( curnode->next !=NULL){
			curnode= curnode->next;
		}
		  Node*Tnode=new Node ();
		  cout<<" enter the value "<<endl;
	      cin>>value ;
		  Tnode->item=value;
		  Tnode->next=NULL;
		  curnode->next=Tnode;
				
	}
	else{
		cout<<" list is not exit "<<endl;
	}
	
}
void Nth_insert (){
	int count = 0;
	int position ;
	      Node*Tnode=new Node ();
		  cout<<" enter the value  in list at Nth_position "<<endl;
	      cin>>value ;
		  Tnode->item=value;
		  Tnode->next=NULL;
		  cout <<" Enter Position  of item "<<endl;
		  cin>>position ;
		  if ( head !=NULL){
		  	if ( position ==1){
		  		Tnode->next=head;
		  		head = Tnode ;
		  		cout<<" item insert at the possition "<<position<<endl;
			  }
			  else {
			  	Node*cnode= head;
			  	while ( cnode!=NULL){
			  		cnode=cnode->next;
			  		count ++;
				  }
			  }
			  if (position=count+1){
			  	Node*cnode=head;
			  	while (cnode->next!=NULL){
			  		cnode=cnode->next;
				  }
				  cnode->next=Tnode ; 
			  	
			  }
			  else {
			  	if ( position >count+1){
			  		cout <<"position is not exit "<<endl;
			  		
				  }
				  else {
				  	Node*cnode = head ;
				  	for ( int i= 1 ; i<=position-2;i++){
				  		cnode = cnode->next;
				  		
					  }
					  Tnode->next = cnode->next;
					  cnode->next=Tnode ;
					  
				  	
				  }
			  	
			  }
			  
		  }else {
		  	cout<<" list is not exit "<<endl;
		  }
		  
	
}


int main (){
	int choice ;
	do {
	
	cout <<" \n Enter 1 for Creat node "<<endl; 
	cout <<" Enter 2 for display linked list "<<endl;
	cout <<" Enter 3 for insert item at  first "<<endl;
	cout <<" Enter 4 for  item insert at end"<<endl;
	cout <<" Enter 5 for item insert at the Nth position"<<endl;
	cout <<" Enter 6 for EXIT PROGRAM "<<endl;
	cout <<" Enter your choice "<<endl;
	cin>>choice ;
	switch ( choice ){
		case 1 :
			cout <<" wellcome your choice is Creating node "<<endl;
			create_List ();
			break;
		case 2 :
		    cout <<" wellcome your choice is display linked list  "<<endl;
			display();
			break;
		case 3 :
			cout << " wellcome your choice is insert item at  first "<<endl;
			insertFirst();
			break;
		case 4 :
			cout <<" wellcome your choice is insert item at end "<<endl;
			insertEnd();
			break;
		case 5 :
			cout<<" wellcome your choice is Nth position "<<endl;
			Nth_insert ();
			break;
			
		case 6 :
		    cout <<" PROGRM EXIT "<<endl;
			break;		
					
}
    }while (choice !=6 );
}
