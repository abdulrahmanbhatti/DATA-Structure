 #include<iostream>
using namespace std;
int value ;
struct Node {
	int item ;
	Node*Next;
	Node*previous;
};
Node*head = NULL;
Node*last = NULL;
Node*Tnode ;
Node*cnode;
void createNode(){
	char ch = 'y';
	while (ch == 'y'){
	Tnode=new Node ();
	cout<<" enter value"<<endl;
	cin>>value ;
	Tnode->item = value ;
	Tnode->Next= NULL;
	Tnode->previous= NULL;
	if ( head == NULL){
		head = Tnode ;
		last = Tnode ;
		
	}
	else {
		last->Next=Tnode ;
		Tnode->previous=last ;
		last = Tnode ;
		
	}
	cout<<" if you want to create node then enter Y/n"<<endl;
	cin>>ch;	
}
}
void FirstInsert(){
	if (head==NULL){
		cout<<" Double linked list is not Exist"<<endl;
	}
	else {
	Tnode=new Node ();
	cout<<" enter value"<<endl;
	cin>>value ;
	Tnode->item = value ;
	Tnode->Next= NULL ;
	Tnode->previous= NULL;
	if ( head !=NULL){
		Tnode->Next= head ;
		head->previous=Tnode ;
		head = Tnode ;		
	}
	else {
		cout<<"Double linked list is not exist "<<endl;
	}

}
}
void lastInsert (){
	if ( head ==NULL){
		cout<<" list is not exist "<<endl;
	}
	else {
	Tnode=new Node ();
	cout<<" enter value"<<endl;
	cin>>value ;
	Tnode->item = value ;
	Tnode->Next= NULL ;
	Tnode->previous= NULL;
	cnode = head;
	while(cnode->Next != NULL){
		cnode = cnode->Next ;
	}
	cnode->Next = Tnode ;
	Tnode->previous= cnode ;
	last = Tnode ;
	
	}	
}
void fist_delete (){
	if ( head == NULL){
		cout<<" double linked list is not exist "<<endl;
	}
	else {
	
	Tnode = head ;
	head= head->Next ;
	Tnode = NULL;
//	head->previous= NULL;
}
}
void Last_Delete(){
	if ( head == NULL)
		cout<<" Double linked list is not Exist "<<endl;
	else {
	Node*pnode;
	cnode = head ;
	while (cnode->Next=NULL){
		pnode = cnode;
		cnode=cnode->Next ;
	}
	pnode->Next = NULL;
	last=pnode;
	cnode= NULL; 
}	
}
void display (){
	if ( head == NULL){
		cout<<" Double linked list is not exist "<<endl;
	}
		else {
			cnode=head;
			while ( cnode !=NULL){
				cout<<cnode->item<<"-->";
				cnode=cnode->Next;
			}
			cout<<"NULL"<<endl;
			cout<<" "<<endl;
			cnode=last ;
			while (cnode!=NULL){
				cout<<cnode->item<<"-->";
				cnode=cnode->previous;
			}
			cout<<"NULL"<<endl;
		}
		
	
}





int main (){
		int choice ;
	do{
	cout<<"\nEnter 1 for create a node "<<endl;
	cout<<"Enter 2 for item insert at first "<<endl;
	cout<<"Enter 3 for item insert at last "<<endl;
	cout<<"Enter 4 for First delete  "<<endl;
	cout<<"Enter 5 for last delete "<<endl;
	cout<<"Enter 6 for display linked list "<<endl;
	cout<<"Enter 7 for EXIT THE PROGRAM "<<endl;
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
		case 4 :
			cout<<"Wellcome your choice is First Delete "<<endl;
			fist_delete ();
			break;
		case 5 :
			cout<<" Wellcome your choice is last Delete "<<endl;
			 Last_Delete();
			break;
		case 6 :
			cout <<"Wellcome your choice is display linked list "<<endl;
			display ();
			break;	
		case 7 :
			cout<<" PROGRAM EXIT"<<endl;
			break;
	}
}while (choice!=7);

	
}
