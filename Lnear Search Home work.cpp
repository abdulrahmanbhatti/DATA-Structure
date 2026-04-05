#include<iostream>
using namespace std;
void  linearerch (){
		int arraySize ;
	cout<<" enter size of Array "<<endl;
	cin>>arraySize;
	int arr[arraySize];
	
	cout<<" enter element of array"<<endl;
	for ( int i = 0 ;i<arraySize ; i++){
		cout<<" arr ["<<i<<"]"<<"="<<endl;
		cin>>arr[i];
	}
	int item ;
	cout <<" enter itam what do you want to find "<<endl;
	cin>>item;
	int count = 0;
	for (int i =0; i <arraySize ; i++){
		if ( arr[i] == item){
			count +=1;
		}
		cout<<"at the index =  "<<i<<endl;
//		cout<<"itam apper "<<count<<"time "<<endl;
	}
		cout<<"itam apper "<<count<<"time "<<endl;
}
void binreaySearch (){

		int arraySizes ;
	cout<<" enter size of Array "<<endl;
	cin>>arraySizes;
	int arr[arraySizes];
	
	cout<<" enter element of array"<<endl;
	for ( int j = 0 ;j<arraySizes ; j++){
		cout<<" arr ["<<j<<"]"<<"="<<endl;
		cin>>arr[j];
	}
	int items ;
	cout <<" enter itam what do you want to find "<<endl;
	cin>>items;
	int mid ;
	int lowerBound = 0;
	int uperBound = arraySizes-1;
	mid = (lowerBound + uperBound)/2;
	while ( arr[mid]!=items && lowerBound < uperBound ){
		if (items>arr[mid]){
			lowerBound =mid+1;
			
		}
		else
		uperBound = mid -1;
		
		
	mid =( lowerBound+uperBound	)/2;
     	if( items ==arr[mid]){
     		cout<<" item is found  at the index = "<<mid<<endl;
		 }
		 else
		 cout<<"item is not found"<<endl;
	
	}
	
	
	
}

int main (){
//	do{

int choice ;
do {
cout<<" 1 for linearSearch "<<endl;
cout<< " 2 for binerySearch "<<endl;
cout<<" 3 for exit "<<endl;
cout<<"enter your choice "<<endl;
cin>>choice ;
 if ( choice ==1){
 	cout<<"wellcome you chose linearSearch "<<endl;
 	linearerch ();
 }
 else if (choice ==2 ){
 	cout<<"wellcome you chose binearySearch "<<endl;
 	 binreaySearch ();
 }
 else
 
 cout<<" exit the program "<<endl;

} while ( choice != 3);
}
	












