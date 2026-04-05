#include<iostream>
using namespace std;
void linearSearch(){
		int arr []={ 10,20,30,40,30,50,60,30,70};
	int item;
	cout<<"enter item what do you want to find "<<endl;
	cin>>item;
	int count=0;
	for (int i = 0 ; i<9 ; i++){
		if ( arr[i]==item ){
			count+=1;
	cout<<"at the index :"<<" "<<i<<endl;

			}
		}
			cout<< item << " "<<" appears  :"<<count <<endl;
				
		}

int main (){
	linearSearch();
}

