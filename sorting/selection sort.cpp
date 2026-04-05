#include <iostream>
using namespace std ;
int arr[]={30,52,29,87,63,27,19,54};
int n = 8;
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
void display (){
	for ( int i= 0 ; i <n; i++){
	    cout<<arr[i]<<endl;
	}
}

int main (){
	seletionSort();
	display ();

}
