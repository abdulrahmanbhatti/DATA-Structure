#include<iostream>
using namespace std;
int stack [20];
int maxsize= 5;
int top = -1;
void push (int item ){
	if ( top == maxsize-1){
		cout<<" stack is overflow "<<endl;
		
	}
	else {
		cout<<" enter item "<<endl;
		cin>>item;
		top = top +1;
		stack [top]=item;
		
	}
}
void pop (){
	if ( top == -1){
		cout<< " stack is underflow "<<endl;
		
	}
	else{
		stack[top];
		top= top-1;
		cout<<stack[top] <<"  "<<"element pop at the index = "<<top<<endl;
	}
	
}
void display ( ){
	if (top ==-1){
		cout<<"no value in stack"<<endl;
	}
	else{

	for (int i = top; i>=0;i--){
		cout<<stack[i]<<endl;
	}
}
}
int main (){
	int  choice, item  ;
	do{
		cout<<"1 for push "<<endl;
		cout<<"2 for pop "<<endl;
		cout<<"3 for display "<<endl;
		cout <<"4 for exit "<<endl;
		cout <<"enter your choice "<<endl;
		cin>>choice ;
		switch ( choice ){
			case 1 :
				cout<< "WELL COME  your chioce is 1"<<endl;
				push(item);
				break;
			case 2 :
				cout<< "WELL COME  your chioce is 2"<<endl;
				pop();
				break;
			case 3 :
				cout<< "WELL COME  your chioce is 3"<<endl;
				display ();
				break;
			case 4:
				cout<< "WELL COME  your chioce is 4"<<endl;
				cout<<"exit"<<endl;
				break;		
		}
		
	} while (choice !=4);
	
}
