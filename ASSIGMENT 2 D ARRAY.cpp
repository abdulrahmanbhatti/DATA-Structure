#include<iostream>
using namespace std;
int row  ,columns;
int arr[10][10];

void RowSum(){
	int sum = 0;
	  for( int i =0 ; i<row;i++){
	  	for(int j=0; j<columns;j++){
	  		sum +=arr[i][j];
		  }  
		  cout<<"the sum of the =   " <<i+1 <<"  row  "<<sum <<endl;
	  	  sum=0;
	  }
}
void columnSum(){
	int sum = 0;
	  for( int j =0 ; j<columns; j++){
	  	for(int i=0; i<row; i++){
	  		sum +=arr[i][j];
		  }
		  cout<<"the sum of the =   " <<j+1<<"  columns  " <<sum <<endl;
	  	 sum=0;
	  }
}
void Product_of_Row(){
	int product;
	int total_Sum_of_product=0;
	for ( int i = 0 ; i<columns; i++){
		product=arr[0][i]*arr[row-1][i];
			cout<<" the product of "<<i+1<<"element of  first row with the "<<i+1<<" element of last row = "<<product<<endl;
	total_Sum_of_product+=product;
	product=0;
			  
	}
	
cout<<"Total sum of fisrt row and last row =  "<<	total_Sum_of_product<<endl;

}
void product_of_column(){
     int product;
     int total_Sum_of_product=0;
	for (int i = 0; i <row; i++){
	product=arr[i][0]*arr[i][columns-1];
		cout<<" the product of "<<i+1<<"element of  first column with the "<<i+1<<" element of last column = "<<product<<endl;
	total_Sum_of_product+=product;
	product=0;
	}

}
int main (){
	int choice ;
	cout<<"enter the number of row "<<endl;
	cin>>row;
	cout<<"enter the number of columns "<<endl;
	cin>>columns;
	for (int i =0 ; i<row; i++){
		for(int j =0;j<columns;j++){
			cout<<"arr ["<<i<<"]"<<"["<<j<<"]"<<endl;
			cin>>arr[i][j];
		}  
	}
  do{
  	cout<<" 1 : for sum of the each row "<<endl;
  	cout<<" 2 : for sum of the each columns"<<endl;
  	cout<<" 3 : for product of first  row  and last row "<<endl;
  	cout<<" 4 : for produt of first column and last column  "<<endl;
  	cout<<" 5: for exit the program"<<endl;
  	cout<<" enter your choice "<<endl;
  	cin>>choice ;
  	switch(choice){
  		case 1 :
  			cout<< " your choice is sum of each row "<<endl;
  			RowSum();
  			break;
  		case 2 :
		  cout<<" your choice is sum of each column "<<endl;
		  	columnSum();
		  	break;
		case 3 :
	      cout<<" your choice is product of row "<<endl;
		    Product_of_Row();
			break;
		case 4 :
		cout<<" your choice is product of column"<<endl;
		    product_of_column();
		    break;
		case 5 :
		cout<<" EXIT THE PROGRAM"<<endl;
		break;    
				
  			
  		
	  }
		
	}while(choice!=5);	
}
