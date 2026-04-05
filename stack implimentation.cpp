#include<iostream>
using namespace std;
int stack [20];
	int maxs= 5;
	int item = 0;
	int top = -1;
void push ( int item){
	if (top ==maxs-1){
		cout<<" stack is overflow "<<endl;	
	}
	else
	{
		cout<<" enter value "<<endl;
		cin >>item;
		top= top+1;
		stack [top]= item ;
	}


}

void pop (){
	if ( top ==-1){
		cout<<" stack is underflow";
	}
	else{
		item = stack [top ];
		top = top+1;
	}
}
void display (){
	for ( int i = top ; i>=0  ; i--){
		cout<<i<<endl;
	}
}
int main (){
	char choice , item ;
	do{
		cout<<"1 for push "<<endl;
		cout<<" 2 for pop "<<endl;
		cout<<"3 for display "<<endl;
		cout << " 4 for exit "<<endl;
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
				
				break;
					
				
				
		}
		
	} while (choice !=4);
	
}
