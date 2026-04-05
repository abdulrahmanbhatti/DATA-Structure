#include<iostream>
using namespace std;
int arr[]={30,52,29,87,63,27,19,54};
int n = 8;
void bubbleSort(){
	int temp ;
	for ( int i = 0 ; i <=n-1; i++){
		for (int j = 0 ; j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
	
}
void display (){
	for ( int i= 0 ; i <n; i++){
	    cout<<arr[i]<<endl;
	}
}
int main (){
int choice ;
do {
cout<<" Enter 1 for sorting array "<<endl;
cout<<" Enter 2 for display sorted array "<<endl;
cout<<" Enter 3 for EXIT PROGRAM "<<endl;
cout<<" Enter Your choice "<<endl;
cin>>choice;
switch ( choice ){
	case 1 :
		cout<<"Wellcome your choice is sorting array "<<endl;
		bubbleSort();
		break;
	case 2 :
		cout<<"Wellcome your choice is  display sorting array "<<endl;
		display ();
		break;
	case 3 :
		cout<<" PROGRAM EXIT "<<endl;
} 

}while (choice !=3);
	
}  
