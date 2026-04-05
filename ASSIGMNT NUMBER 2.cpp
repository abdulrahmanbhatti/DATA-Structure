#include<iostream>
using namespace std;
int arr[100];
int item;
int arrSize;

void Search_element() {
	int count = 0;
	cout << "Enter item that you want to find : " << endl;
	cin >> item;
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == item) {
			count = count + 1;
			cout << item << " Item is found at the index :" << i << endl;
		}
	}
	cout << "Item is apper " << count << " times in array " << endl;
}

void display() {
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << endl;
	}
}

void insertion_element() {
	int choice;
	do {
		cout << " 1 : For element insert at the start of the array" << endl;
		cout << " 2 : For element insert at the middle  of the array" << endl;
		cout << " 3 : For element insert at the end of the array" << endl;
		cout << " 4 : For display array" << endl;
		cout << " 5 : For EXIT" << endl;
		cout << " enter your choice " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Wellcome your choice is insert item at the start of the array " << endl;
			cout << "Enter item that you want to insert in first :" << endl;
			cin >> item;
			for (int i = arrSize - 1; i >= 0; i--) {
				arr[i + 1] = arr[i];
			}
			arr[0] = item;
			arrSize += 1;
			break;
		case 2: {
			int position;
			cout << "Your choice is insert element  at the middle  of the array " << endl;
			cout << "Enter item that you want to insert at middle : " << endl;
			cin >> item;
			cout << "Enter position in which you want to isert : " << endl;
			cin >> position;
			if (position >= 0 && position <= arrSize) {
				for (int i = arrSize - 1; i >= position; i--) {
					arr[i + 1] = arr[i];
				}
				arr[position] = item;
				arrSize += 1;
			}
			else {
				cout << "Invalid position!" << endl;
			}
			break;
		}
		case 3:
			cout << "Enter item what do you want to insert at the end " << endl;
			cin >> item;
			arr[arrSize] = item;
			arrSize += 1;
			break;
		case 4:
			display();
			break;
		case 5:
			cout << "Exit the insertion program : " << endl;
			break;
		}
	} while (choice != 5);
}

void delettion_element() {
	cout << "Enter item that you want to delete :  " << endl;
	cin >> item;
	int count = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == item) {
			count++;
			for (int j = i; j < arrSize - 1; j++) {
				arr[j] = arr[j + 1];
			}
			arrSize--;
		//	i--;
		}
	}
	if (count == 0)
		cout << "Item that you want to delete not in array " << endl;
}

void remove_Duplicate_item() {
	for (int i = 0; i < arrSize; i++) {
		for (int j = i + 1; j < arrSize; j++) {
			if (arr[i] == arr[j]) {
				for (int k = j; k < arrSize - 1; k++) {
					arr[k] = arr[k + 1];
				}
				arrSize--;
				//j--;
			}
		}
	}
	cout << "Duplicate elements removed successfully." << endl;
}

int main() {
	int choice;
	cout << "Enter size of the array : " << endl;
	cin >> arrSize;
	for (int i = 0; i < arrSize; i++) {
		cout << " arr [" << i << "] = " << endl;
		cin >> arr[i];
	}

	do {
		cout << " ========  WELL COME TO MANU ============" << endl;
		cout << "1 : for searching  of element  " << endl;
		cout << "2 : for insertion of element  " << endl;
		cout << "3 : for deletion of element   " << endl;
		cout << "4 : for remove duplicate element  " << endl;
		cout << "5 : for display element " << endl;
		cout << "6  : for EXIT" << endl;
		cout << " enter your choice :  " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Wellcome your choice is searching " << endl;
			Search_element();
			break;
		case 2:
			cout << "Wellcome your choice is inserting  " << endl;
			insertion_element();
			break;
		case 3:
			cout << " Wellcom your choice is deleting " << endl;
			delettion_element();
			break;
		case 4:
			cout << "Wellcom your choice is removing duplicate item  " << endl;
			remove_Duplicate_item();
			break;
		case 5:
			cout << "Wellcom your choice is display item " << endl;
			display();
			cout<<"Size : "<<arrSize<<endl;
			break;
		case 6:
			cout << " PROGRAM EXIT" << endl;
		}
	} while (choice != 6);
}

