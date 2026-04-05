#include<iostream>
using namespace std;
int arr[100];
int item ;
int arrSize;
void search (){
	int count = 0 ;
	cout<<" enter your item what do want to find "<<endl;
	cin>>item;
	for ( int i = 0 ; i<arrSize;i++){
		if (arr[i]==item ){
		count ++;
		cout<<item << " is found at the index "<<i<<endl;
    	}
	}
	cout<< item <<" are appar at the:  "<<count <<endl;
		
}
void insertStart(){
	cout<<" enter your item what do want to find "<<endl;
	cin>>item;
	for ( int i = arrSize-1; i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=item;
	arrSize++;	
}
void insertMid(){
	cout<<" enter your item what do want to find "<<endl;
	cin>>item;
	int uperBound=0;
	int lowerBound=arrSize;
	int mid = (uperBound+lowerBound)/2;
	for(int i = arrSize-1 ; i>=mid; i--){
		arr[i + 1] = arr[i];		
	}
	arr[mid]=item;
	arrSize++;
}
void insertEnd(){
	cout<<" enter your item what do want to find "<<endl;
	cin>>item;
	arr[arrSize]=item;
	arrSize++;
	
}
void display ( ){
	for ( int i = 0 ; i <= arrSize; i++){
		cout<<arr[i]<<endl;
	}
}
void insertion_element() {
	int choice;
	do {
		cout << " 1 : For element insert at the start of the array" << endl;
		cout << " 2 : For element insert at the middle  of the array" << endl;
		cout << " 3 : For element insert at the end of the array" << endl;
		cout << " 4 : For display array" << endl;
		cout << " 5 : For EXIT" << endl;
		cout << " enter your choice " << endl;
		cin >> choice;
		switch (choice) {
			case 1:
			cout << "Wellcome your choice is insert item at the start of the array " << endl;
			insertStart();
			break;
			case 2: 
			cout << "Your choice is insert element  at the middle  of the array " << endl;
			insertMid();
			break;
			case 3 :
			cout<<"Your choice is insert element  at the end  of the array "<<endl;
			insertEnd();
			break;
			case 4:
			cout<<" your choice is display element "<<endl;
			display ();
			break;
			case 5 :
			cout<<" EXIT THE PROGRAM "<<endl;
			break;
			
			 
		}
	}while ( choice!=5);
	}
		
int main (){
	
}
