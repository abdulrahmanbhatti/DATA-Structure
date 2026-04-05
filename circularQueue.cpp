#include<iostream>
using namespace std;
int circularQueue[100];
int rear = -1;
int front = -1;
int maxSize=5;
int item ;
void circularQInsert(){
	cout<<" Enter item to Insert into Circular Queue = "<<endl;
	cin>>item;

	if (( front == 0 && rear == maxSize-1) || (front ==rear+1))
	  cout<<" circular Queue is OverFlow "<<endl;
	else
	{
		if (front ==-1){
		
		front =0;
		rear =0;
	    }
	    else {
	    	if ( rear ==maxSize-1)
	    	rear =0;
	    	else 
	    	rear =rear+1;
		}
	 
	}
	circularQueue[rear]=item;
}

void circularQDelet(){
	if(front ==-1)
	cout<<" CIrcular Queue is empty "<<endl;
	else 
	item = circularQueue[front];
	   if ( front ==rear ){
	   	front =-1;
	   	rear=-1;
	   	
	   }
	   else
	   {
	   	if (front == maxSize-1)
	   	front=0;
	   	else 
	   	front = front +1;
	   	
	   }
	
}

void display(){

for (int i = front; ; i = (i + 1) % maxSize) {
    cout << circularQueue[i] << endl;
    if (i == rear)
        break;
}
}

int main (){
	int choice ;
	do{
		
	
	cout <<" 1 : for insert circular Queue"<<endl;
	cout<<"  2 : for delet circular Queue"<<endl;
	cout<<"  3 : for displayQueue"<<endl;
	cout<<"  4 : for EXIT CIRCULAR QUEUE"<<endl;
	cout<<" enter your choice "<<endl;
	cin>>choice ;
	switch ( choice){
	
   	case 1: 
	    cout<<" wellcome your choice is inserting "<<endl;
	    circularQInsert();
	    break;
	case 2:
		cout<<" wellcome your choce is deleting "<<endl;
		circularQDelet();
		break;
	case 3 :
	    cout<<" wellcome  your choice is display "<<endl;
		display ()	;
		break;
	case 4:
		cout<<" EXIT PROGRAM "<<endl;
	 }
		
}while(choice!=4); 

	
}
