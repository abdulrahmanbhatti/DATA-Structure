#include<iostream>
using namespace std;
int value ;
struct Node {
	int item ;
	Node*left ;
	Node*Right;
};  
Node*root = NULL;
Node*createNode(int value){
	Node*node = new Node ();
	node->item = value;
	node->left=NULL;
	node->Right=NULL;
	return node;
}
Node*insertNode(Node*root,int value ){
	if (root == NULL){
		return createNode(value);
	}
	if (value<root->item){
		root->left=insertNode(root->left,value );
	}
	else{
		root->Right=insertNode(root->Right,value );	
	}
		return root;
}
void preorder(Node*root){
	if (root == NULL){
		return;
	}
	cout<<root->item<<" ";
	preorder(root->left);
	preorder(root->Right);	
}
void inorder(Node*root){
		if (root == NULL){
	return;
	}
	else{

	inorder(root->left);
	cout<<root->item<<" ";
	inorder(root->Right);
		} 
}
void postorder(Node*root){
		if (root == NULL){
		return;
		}
		else{
	    postorder(root->left);
		postorder(root->Right);
		cout<<root->item<<" ";	
       }

}
Node*SerchItem(Node*root,int value ){
		if (root == NULL){
			cout<<" item is not found"<<endl;
			return NULL;
		}
		if (value == root->item){
			cout<<" item is found "<<endl;
			return root;
		}
	
		if ( value < root->item )
		  	return SerchItem(root->left,value );
		else
			return SerchItem(root->Right,value );
			
		}
void deleteItem(){
	
}
int main (){
	int value []={40,25,10,32,55,50,70,60 };
	int n = sizeof (value)/sizeof(value[0]);
	int choice ;
	do{
	cout<<" \n Enter 1 for insertNode"<<endl;
	cout<<" Enter 2 for preorder Traversal "<<endl;
	cout<<" Enter 3 for inorder Traversal  "<<endl;
	cout<<" Enter 4 for postorder Traversal "<<endl;
	cout<<" Enter 5 for search Item"<<endl;
	cout<<" Enter 6 for delete item"<<endl;
	cout<<" Enter 7 for PROGRAM EXIT"<<endl;
	cout<<" Enter your choice "<<endl;
	cin>>choice ;
	switch ( choice ){ 
		case 1 :
			cout<<" wellcome your choice is insert node "<<endl;
			cout<<" INSERTING"<<endl;
			for ( int i = 0 ; i <n;i++){
				root = insertNode(root, value[i] );
				}
		  	break;
		case 2 :
			cout<<" wellcome your choice is preorder Traversal  " 	<<endl;
			preorder(root);
			break;
		case 3 :
			cout<<" wellcome your choice is inorder  Traversal  " 	<<endl;
			inorder(root);
			break;
		case 4 :
			cout<<" wellcome your choice is postorder   Traversal  " 	<<endl;
			postorder(root);
			break;
		case 5 :
			cout<<" Wellcome your choice is search  item "<<endl;
			int value ;
			cout<<" enter value "<<endl;
			cin>>value ;
			SerchItem(root ,value   );
			break;
		case 6 :
			cout<<"Wellcome your choice is delete  item "<<endl;
			deleteItem();
			break;
		case 7 :			
			cout<<"PROGRAM EXIT "<<endl;
			break;
	}
}while(choice !=7);
	
	
}
