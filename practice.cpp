#include<iostream>
using namespace std;
int stack [20];
int top = -1;
int maxsize = 5;
void PUSH (int item ){
	if ( top == maxsize-1){
		cout<<" stack overflow "<<endl;
	}
	else {
		cout << " enter item "<<endl;
		cin>>item ;
		top = top +1;
		stack [top]= item;
		
	}
}

int main (){
	
}
