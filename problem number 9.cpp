
//problam number 9 
#include<iostream>
using namespace std;
int main (){
	int totalBill, totalAmount , x,y;
	totalBill = 160;
	totalAmount = 1760;
//	solve the equation : x+y = 160, 10x+50y= 1760;
    y = (totalAmount-10*totalBill)/40;
    x=totalBill-y;
    cout<<" total 10$ bill = "<<x<<endl;
    cout<<" total 50$ bill = "<<y<<endl;
    
	}


