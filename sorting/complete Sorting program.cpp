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
void seletionSort(){
	int temp ;
	  for ( int i = 0 ; i <n-1; i++){
	  	int smallIndex=i;
	  	for ( int  j=i+1;j<n;j++){
	  		if ( arr[j]<arr[smallIndex]){
	  			smallIndex = j;
			  }
		  }
		  temp = arr[smallIndex];
		  arr[smallIndex]=arr[i];
		  arr[i]=temp;
		  
	  }
}
void insertionSort(){
	for ( int i = 0 ; i <n-1; i ++){
		int curr=i;
		int pre = i-1;
		while (pre>=0&& arr[pre]>arr[curr]){
			arr[pre+1]=arr[pre];
			pre--;
		}
		arr[pre+1]=arr[curr];
	}
}
void QuickSort(){
}
void sheelSort (){
}
void margSort (){
	
}
void display (){
	for ( int i= 0 ; i <n; i++){
	    cout<<arr[i]<<endl;
	}
}
int main (){
int choice ;
do {
cout<<" Enter 1 for Bubblle sort  "<<endl;
cout<<" Enter 2 for selection sort  "<<endl;
cout<<" Enter 3 for insertion sort "<<endl;
cout<<" Enter 4 for Quick sort  "<<endl;
cout<<" Enter 5 for sheel sort  "<<endl;
cout<<" Enter 6 for marg sort  "<<endl;
cout<<" Enter 7 for display sorted array "<<endl;
cout<<" Enter 8 for EXIT PROGRAM "<<endl;
cout<<" Enter Your choice "<<endl;
cin>>choice;
switch ( choice ){
	case 1 :
		cout<<"Wellcome your choice is Bubble sort "<<endl;
		bubbleSort();
		break;
	case 2 :
		cout<<"Wellcome your choice is selection sort "<<endl;
		seletionSort();
		break;
	case 3 :
		cout<<"Wellcome your choice is insertion  sort "<<endl;
		insertionSort();
		break;
	case 4 :
		cout<<"Wellcome your choice is Quick  sort "<<endl;
		QuickSort();
		break;
	case 5 :
		cout<<"Wellcome your choice is sheel sort "<<endl;
		sheelSort ();
		break;
	case 6 :
		cout<<"Wellcome your choice is marg sort "<<endl;
		margSort ();
		break;
		
	case 7 :
		cout<<"Wellcome your choice is  display sorting array "<<endl;
		display ();
		break;
	case 8 :
		cout<<" PROGRAM EXIT "<<endl;
} 

}while (choice !=8);
	
}  

