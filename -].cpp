#include<iostream>
using namespace std;
int queue[100];
int front =-1;
int rear=-1;
int item ;
int maxSize;
void QueueInsert(){
	cout<<" enter the item "<<endl;
	cin>>item;
	if ( rear ==maxSize-1)
	cout<<" queue is overFlow "<<endl;
	else{
	
	rear = rear +1;
	queue[rear]=item;
	if(rear=0)
	front=0;
}
}
int main (){
	
}
