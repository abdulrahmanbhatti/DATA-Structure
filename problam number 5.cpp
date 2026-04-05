#include<iostream>
using namespace std;
int main (){
	int n1,n2,n3,n4 ;
	cout<<" enter n1 "<<endl;
	cin>>n1;
	cout<<" enter n2 "<<endl;
	cin>>n2;
	cout<<" enter n3 "<<endl;
	cin>>n3;
	if(n1>n2)
		if(n1>n3)
			if(n1>n4){
				cout<<" n1 is maximam "<<endl;
			}
			else 
			{
				cout<<" n4 is maximam "<<endl;
			}
 		else {
 			if ( n3> n2){
 				if(n3>n4){
 					cout<<" n3 is maximam "<<endl;
				 }
				 else{
				 	cout<<" n4 is maximam "<<endl;
				 }
 				
			 }
			 else {
			 	if(n2>n4){
			 		cout<<" n2 is grater"<<endl;
			 		
				 }
				 else{
				 	cout<<" n4 is grater "<<endl;
				 }
			 	
			 }
 			
		 }
}
