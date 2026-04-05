//problam number 4
#include<iostream>
using namespace std;
int main (){
	int n1,n2,n3;
	while(true){
	
	cout<<" enter n1 "<<endl;
	cin>>n1;
	cout<<" enter n2 "<<endl;
	cin>>n2;
	cout<<" enter n3 "<<endl;
	cin>>n3;
	if (n1<n2)
		if(n1<n3){
			cout<<"n1 is minimum "<<endl;	
		}
		else {
			cout<<"n3 is minimam "<<endl;
			}
	else{
		if ( n2<n3){
			cout<<" n2 is minimum "<<endl;
		}
		else{
			cout<<" n3 is minimum "<<endl;
		}
	}
}
	
}
