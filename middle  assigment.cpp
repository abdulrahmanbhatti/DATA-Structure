#include<iostream>
using namespace std;
int arr[100];
int item ;
int arrSize ;

void searching (){
	int count = 0;
	for ( int i = 0 ; i<arrSize;i++){
		if (arr[i]==item ){
			count= count +1;
			cout<<item  << " item found at the index "<<i<<endl;
		}
		cout<<" item appar at the = "<<count<<" time "<<endl;
		
	}
}
void display (){
	for ( int i = 0 ; i<arrSize ; i++){
		cout<<arr[i]<<endl;
	}
}
void insertion_element(){
	int choice ;
	do{
		cout << " 1 : For element insert at the start of the array" << endl;
		cout << " 2 : For element insert at the middle  of the array" << endl;
		cout << " 3 : For element insert at the end of the array" << endl;
		cout << " 4 : For display array" << endl;
		cout << " 5 : For EXIT" << endl;
		cout << " enter your choice " << endl;
		cin >> choice;
		switch(choice){
			case 1 :
				cout<<" wellcome your chooice is insert element at the start of the array "<<endl;
				cout << "Enter item that you want to insert in first :" << endl;
			    cin >> item;
				for ( int i = arrSize-1;i>=0; i-- ){
					arr[i +1]==arr[i];
				}
				arr[0]==item;
				arrSize+=1;
				break;
			case 2 :
				cout<<" wellcome your chooice is insert element at the middle  of the array "<<endl;
				cout << "Enter item that you want to insert in middle  :" << endl;
			    cin >> item;
			    for( int i = arrSize-1; i<=arrSize/2;i--){
			    	arr[i+1]==arr[i];	
				}
				arr[arrSize/2]==item;
				arrSize+=1;
			case 3 :
				cout<<" wellcome your chooice is insert element at the end   of the array "<<endl;
				cout << "Enter item that you want to insert in end :" << endl;
			    cin >> item;
			    break;
			case 4 :
				cout << "wellcome your choice is disply "<<endl;
				display ();
				break;
			case 5 :
			    cout << " EXIT "<<endl;
				break;				
		}
	}while(choice !=5);
}
void deletion_element(){
	            cout << "Enter item that you want to insert in first :" << endl;
			    cin >> item;
			    for(int i = 0 ; i<=arrSize-1; i++){
			    	if ( arr[i]==item ){
			    		for ( int j=i ; j<=arrSize-1; j++){
			    			arr[j]==arr[j+1];
						}
						arrSize--;
						i--;
			    		
					}
				}
	
}

int main (){

}
