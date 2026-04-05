#include<iostream>
using namespace std;
int  fac(int n){
	if ( n==1|| n==0){
		return 1;
		
	}
	int fac_n= n*fac(n-1);
	return fac_n;
}
int main (){
	int n;
	cout<<" enter the number "<<endl;
	cin>> n;
	cout<< fac(n);
	
}
