#include<iostream>
using namespace std;
int value ;
 struct Node {
	int item ;
	Node*next;
};
Node*head = NULL;
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
			  
		  }
		  
	
}
int main(){
	
	
	
	
	
	
	
	
	
	
	
	
}
