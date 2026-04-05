#include<iostream>
using namespace std;
void print_num( int n ){
	if (n==0){
		return ;
	}
	cout<<n;
	print_num(n-1);
}
int main (){
	int n;
	cout << " enter number "<<endl;
	cin>>n;
	print_num(n);
	
}
