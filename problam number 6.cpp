//problam number 7
#include<iostream>
using namespace std;
int  procedure(int n, int p){
	int result= 1 ;
	for( int i = 1; i<=p ; i++){
		result = result *n;
		
	}
	cout<< "Exponenial power of tha equation  "<<n<<"^"<<p<<" is =  "<<result<<endl;
	
}
int main (){
	int num, power, function  ;
	cout<<" enter number "<<endl;
	cin>>num;
	cout<<"enter power"<<endl;
	cin>>power;
    function =	procedure(num , power);
	cout<<function <<endl;
}
