#include<iostream>
using namespace std;
int main (){
	int num ;
	cout<<"enter number " <<endl;
	cin>>num;
	int sum= 0;
	for(int i = 0; i<=num; i=i+2){
	
		cout<<" the even number is "<<i<<endl;
		sum = sum +i;
	}
	
	cout<<" the sum of the even number "<<sum<<endl;
	
	
}
