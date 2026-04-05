#include<iostream>
using namespace std;
int arr[100];
int item ;
void Search (){
	int count = 0;
	cout<<" enter item what do you want to find "<<endl;
	cin>>item;
	for( int i = 0 ;i<= arr[100]; i++){
		if(arr[i]==item){
			count= count+1;
			cout<<item<<" item is found at the index "<<i<<endl;
			
		}
	}
	cout<<"item are apper at the "<<count<<" time"<<endl;

}
void insertion(int arrSize ){
	int choice ;
	do{
	
	cout<<" 1 for element insert at the start of the array"<<endl;
	cout<<" 2 for element insert at the middle  of the array"<<endl;
    cout<<" 3 for element insert at the end of the array"<<endl;
    cout<<" 4 for display array element "<<endl;
    cout<<" enter your choice "<<endl;
    cin>>choice ;
//    switch(choice){
//    	case 1: 
//    	cout<<" wellcome your choice is insert item at the start of the array "<<endl;
//    	cout<<" enter item what do you want to insert"<<endl;
//    	cin>>item;
//    	for ( int i = arrSize-1; i>=0;  i-- ){
//    		arr[(arrSize-1+1)]=arr[i];
//		}
//		break;
//		case 4 :
//			display ();
//			break;
       if ( choice == 1){
       	cout<<" wellcome your choice is insert item at the start of the array "<<endl;
    	cout<<" enter item what do you want to insert"<<endl;
    	cin>>item;
    	for ( int i = arrSize-1; i>=0;  i-- ){
    		arr[(i+1)]=arr[i];
		}
       	
	   
//	   if ( choice == 4 ){
////	   	display ();
//	   }
//
//			
//		
//	
//		
//    	
//	}
//}while ( true);

	
	
}
}
}
//void delettion(){
//	
//}
//void remove (){
//	
//}
void display (){
	for ( int i = 0 ; i<= arr[100]; i++){
		cout<<arr[i]<<endl;
	}
}
int main (){
	int choice ;
	
	int arrSize;
	cout<<" enter size of the array "<<endl;
	cin>>arrSize;
	for ( int i = 0 ; i<arrSize ; i++){
		cout<<" enter element at the index "<<i<<endl;
		cin>>arr[i];
		
	}

	do{
		cout<<" ========  WELL COME TO MANU ============"<<endl;
		cout<<"1 for searching  of element  "<<endl;
		cout<<"2 for insertion of element  "<<endl;
		cout<<"3 for deletion of element   "<<endl;
		cout<<"4 for remove duplicate element  "<<endl;
		cout<<" enter your choice "<<endl;
		cin>>choice ;
		switch(choice){
			case 1 :
				cout<<"wellcome your choice is searching "<<endl;
				Search ();
				break;
			case 2 :
				cout<<"wellcome your choice is inserting  "<<endl;
				insertion(arrSize);
				break;
			case 3:
			display ();
			break;	
		}
		
	}while(choice !=5 );

	
	
}
