#include<iostream>
using namespace std;
int DEQueue[100];
int maxSize; 
int item ;
int leftt = -1;
int rightt =-1;
void inertingDEQ(){
	int choice ;
//	cout<<" enter item "<<endl;
//	cin>>item;
	if (( leftt == maxSize-1 && rightt == 0) || (rightt=leftt+1))
	cout<<" DQ is full"<<endl;
	else {
		do {
			cout<<" 1 : for left insert "<<endl;
			cout<<" 2 : for right insert "<<endl;
			cout<<" 3 : for display "<<endl;
			cout<<" 4: PROGRAM EXIT  "<<endl;
			cout<<" enter your choice "<<endl;
			cin>>choice;
			switch(choice ){
				case 1: 
				cout<<" wellcome your choce is  left insert "<<endl;
				  cout<<" enter item "<<endl;
	               cin>>item;
				if(leftt=-1){
					leftt = 0 ; 
					rightt = 0; 
				}
				else {
					if ( leftt =maxSize-1)
					leftt=0;
					else 
					leftt++;
					DEQueue[leftt]=item;
				}
				break;
				case 2:
					cout<<" wellcome your choice is right insert "<<endl;
					cout<<" enter item "<<endl;
	                cin>>item;
					if(rightt=-1){
						leftt=0;
						rightt=0;
					}
					else {
						if ( rightt =0)
						rightt = maxSize-1;
						else{
						
						rightt --;
						DEQueue[rightt]=item;
					}
						
					}
					break;
				case 3:
					cout<<" wellcome you choic is display element of QEQ"<<endl;
					for ( int i ; i<maxSize; i++){
						DEQueue[i];
					}
					break;
				case 4:
					 cout<<" PROGRAM EXIT "<<endl;
					 break;	
					
				
				
			}
			
		}while(choice !=4);
//		if ( )
	}
}
void deleteingDEQ(){
	int choice ;
    if ( leftt ==-1&&rightt==-1)
    
	cout<<" DEQ is empty "<<endl;
	else {
		do {
			cout<<" 1 : for left delete "<<endl;
			cout<<" 2 : for right delete"<<endl;
			cout<<" 3 : for display "<<endl;
			cout<<" 4: PROGRAM EXIT  "<<endl;
			cout<<" enter your choice "<<endl;
			cin>>choice;
			switch(choice ){
				case 1: 
				cout<<" wellcome your choce is  left delete "<<endl;
				item = DEQueue[leftt];
				if(leftt==rightt ){
					leftt=-1;
					rightt=-1;
			     	}
			     
				else {
					if(leftt =0)
					leftt= maxSize-1;
					else 
					leftt--;	
				}
				break;
				case 2:
					cout<<" wellcome your choice is right deletion "<<endl;
					item = DEQueue[leftt];
					if(leftt==rightt ){
					leftt=-1;
					rightt=-1;
			     	}
			     
				else {
					if(rightt = maxSize-1)
					rightt = 0;
					else 
					rightt--;	
				}
				
					break;
				case 3:
					cout<<" wellcome you choic is display element of QEQ"<<endl;
					for ( int i ; i<maxSize; i++){
						DEQueue[i];
					}
				case 4:
					 cout<<" PROGRAM EXIT "<<endl;
					 break;	
					
				
				
			}
			
		}while(choice !=4);
	}
	
	}
	

int main (){
	int choice ;
	cout<<" enter the size of maxSize"<<endl;
	cin>>maxSize;
	do{
	
	cout<<" 1 : for insert DEQ"<<endl;
	cout<<" 2 : for Delete DEQ"<<endl;
	cout<<" 3 : for desplay DEQ"<<endl;
	cout<<" 4 : EXIT PROGRAM OF  DEQ"<<endl;
	cout<<" enter your choice "<<endl;
	cin>>choice ;
	switch(choice ){
		case 1:
			cout<<" wellcome your choice is insert DEQ"<<endl;
			inertingDEQ();
	}
}while(choice !=4 );
	
	
	
}
