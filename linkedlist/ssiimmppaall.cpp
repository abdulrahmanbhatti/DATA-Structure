#include<iostream>
using namespace std;
struct Node {
	int item ;
	Node*next;
	
};
Node*head=NULL;
node*last=NULL;
void createNode(){
}
void FirstInsert(){
	
}
void lastInsert(){
}
void display(){
	
}
int main (){
	int value ;
	int choice;
	cout<<"\n Enter 1 for create linked list "<<endl;
	cout<<"Enter 2 for insert item at first "<<endl;
	cout<<"Enter 3 for insert item at end "<<endl;
	cout<<"Enter 4 for display linked list  "<<endl;
	cout<<"Enter 5 for EXIT PROGRAM "<<endl;
	cout<<" Enter your choice "<<endl;
	cin>>choice ;
	switch ( choice ){
		case 1 :
			cout<<" wellcome your choice is creating node "<<endl;
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
