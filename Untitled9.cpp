#include<iostream>
using namespace std;
int main (){
	int num ;
	cout<<"enter number " <<endl;
	cin>>num;
	int sum= 0;
	for(int i = 1; i<=num; i=i+2){
	
		cout<<" the odd number is "<<i<<endl;
		sum = sum +i;
	}
	
	cout<<" the sum of the odd number "<<sum<<endl;
	
	
}
