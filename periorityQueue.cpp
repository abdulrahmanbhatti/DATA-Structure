#include<iostream>
using namespace std;
int maxSize;
int count =-1;
int p , item ;
struct periorityQ {
	int pri;
	int value ;
};
periorityQ PQueue[100];

void periorityInsert(){
	if (count==maxSize-1)
	cout<<" priority Queue is full"<<endl;
	else {
		count = count+1;
		cout<<" enter priority "<<endl;
		cin>>p;
		PQueue[count].pri=p;
		cout<<" enter value "<<endl;
		cin>>item;
		PQueue[count].value =item ;
		
		
	}
	}
void perioriyDelete(){
	int location ;
	int maxSize_pr ;
	if (count ==-1)  
	cout<<" priority Queue is empty "<<endl;
	else {
		maxSize_pr = PQueue[0].pri;
		location = 0;
		for (int i =0; i<count;i++){
			if(maxSize_pr < PQueue[i].pri){
				maxSize_pr=PQueue[i].pri; 
				location =i;
			}
		}
		cout<<" priority of the queue "<<PQueue[location].pri<<endl;
		cout<<" High priority value "<<PQueue[location].value<<endl;
		for (int i = location ; i <count ; i++){
			PQueue[i].pri=PQueue[i+1].pri;
			PQueue[i].value=PQueue[i+1].value;
		}
		count=count-1;
				
	}
}
 	
	
	
	
int main (){
	int choice ;
	cout<<" enter the size of max  "<<endl;
	cin>>maxSize;
	do{
		cout<<"1: for periorityInsert "<<endl;
		cout<<"2: for perioriyDelete "<<endl;
		cout<<"3: for EXIT "<<endl;
		cout<<"enter your choice "<<endl;
		cin>>choice;
		switch(choice){
			case 1: 
				cout<<"wellcome your choice is periorityInsert"<<endl;
			    periorityInsert();
			    break;
			 case 2 :
			 	cout<<" wellcome your choice is perioriyDelete"<<endl;
			 	perioriyDelete();
			 	break;
			 case 3 :
			 	cout<<" PROGRAM EXIT "<<endl;
				break;	
			 	
		}
	}while ( choice!=3);
	
}
