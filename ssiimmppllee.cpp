#include<iostream>
using namespace std;
int queue[100];
int front =-1;
int rear=-1;
int item ;
int maxSize;
//void QueueInsert(){
//	cout<<" enter the item "<<endl;
//	cin>>item;
//	if ( rear ==maxSize-1)
//		cout<<" queue is overFlow "<<endl;
//	else{
//		rear = rear +1;
//		queue[rear]=item;
//		if(rear=0)
//			front=0;
//  }
//}
 void insertQueue(){
	cout<<" Enter item to Insert into Simple Queue = "<<endl;
	cin>>item;
	if(rear == maxSize-1)
		cout<<" queue is full or OverFlow"<<endl;
	else{
		rear = rear+1;
		queue[rear]=item;
		if ( rear ==0)
			front=0;
			}
} 
void QueueDelete(){
	if ( front==-1||front==rear+1)
		cout<<" Queue is empty "<<endl;
	else{
		item = queue[front];
		front = front+1;
    	if(front>maxSize-1){
   			front=-1;
   			rear=-1;
   }
}
}
void display (){
for(int i = front ; i<=rear ; i++){
	cout<<queue[i]<<endl;
}
}
int main (){
	int choice ;	
	do{
	cout<<" 1: for insertQueue"<<endl;
	cout<<" 2: for deleteQueue"<<endl;
	cout<<" 3: for display"<<endl;
	cout<<" 4: for EXIT QUEUE"<<endl;
	cout<<"enter your choice "<<endl;
	cin>>choice ;
	switch(choice){
		case 1 : 
		cout<<" wellcome your choice is insertData"<<endl;
		insertQueue();
		break;
		case 2 :
		cout<<" Wellcome your choice is deleteing element "<<endl;
	    QueueDelete();
		break;
		case 3:
		cout<<" wellcome your choice is display "<<endl;
		display ();
		break;
		case 4 :
		cout<<" EXIT THE PROGRAM "<<endl;
		break;	
	}
	
   }while(choice!=4);
	
}
