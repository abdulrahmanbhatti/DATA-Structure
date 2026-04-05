#include <iostream>
using namespace std;
int value;
struct Node
{
	int item;
	Node *Next;
};
Node *currnode;
Node *prevCurrnode;
Node *head = NULL;
Node *last = NULL;
void createNode()
{
	char ch = 'y';
	while (ch == 'y')
	{
		Node *Tnode = new Node();
		cout << "Enter the value " << endl;
		cin >> value;
		Tnode->item = value;
		Tnode->Next = NULL;
		if (head == NULL)
		{
			head = Tnode;
			last = Tnode;
		}
		else
		{
			last->Next = Tnode;
			last = Tnode;
		}
		cout << " do you want to enter more item y/n" << endl;
		cin >> ch;
	}
}
void firstDelete()
{
	if (head != NULL)
	{
		Node *Tnode = head;
		cout << "[" << Tnode->item << "]"
									  " is delete "
			 << endl;
		head = head->Next;
		Tnode = NULL;
	}
	else
	{
		cout << "list is not exist" << endl;
	}
}
void lastDelete()
{
	Node *currnode;
	Node *prevCurrnode;
	if (head != NULL)
	{
		currnode = head;
		while (currnode->Next != NULL)
		{
			prevCurrnode = currnode;
			currnode = currnode->Next;
		}
		prevCurrnode->Next = NULL;
		cout << "[" << currnode->item << "]" << "Delete item is " << endl;
		currnode = NULL;
	}
}
void NTH_delete()
{

	if (head != NULL)
	{
		int position;
		cout << " Enter your position " << endl;
		cin >> position;
		if (position == 1)
		{
			Node *Tnode = head;
			cout << "[" << Tnode->item << "]"
										  " is delete "
				 << endl;
			head = head->Next;
			Tnode = NULL;
		}
		else
		{
			int count = 0;
			currnode = head;
			while (currnode != NULL)
			{
				count++;
				currnode = currnode->Next;
			}
			if (position == count)
			{
				currnode = head;
				while (currnode->Next != NULL)
				{
					prevCurrnode = currnode;
					currnode = currnode->Next;
				}
				prevCurrnode->Next = NULL;
				cout << "[" << currnode->item << "]" << "Delete item is at position " << position << endl;
				currnode = NULL;
			}
			else
			{
				if (position > count)
				{
					cout << "list is not exist" << endl;
				}
				else
				{
					currnode = head;
					for (int i = 1; i <= position - 1; i++)
					{
						prevCurrnode = currnode;
						currnode = currnode->Next;
					}
					prevCurrnode->Next = currnode->Next;
					cout << "[" << currnode->item << "]" << "Delete item is at position " << position << endl;
					currnode = NULL;
				}
			}
		}
	}
	else
	{
		cout << "list is not exit " << endl;
	}
}

void display()
{
	if (head == NULL)
	{
		cout << " List is not exist " << endl;
	}
	else
	{
		Node *Tnode = head;
		while (Tnode != NULL)
		{
			cout << "-->>" << Tnode->item;
			Tnode = Tnode->Next;
		}
	}
}

int main()
{

	int choice;
	do
	{
		cout << "\nEnter 1 for create a node " << endl;
		cout << "Enter 2 for item delete  at first " << endl;
		cout << "Enter 3 for item delete at last " << endl;
		cout << "Enter 4 for NTH Delete " << endl;
		cout << "Enter 5 for display linked list " << endl;
		cout << "Enter 6 for EXIT THE PROGRAM " << endl;
		cout << "Enter your choice " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << " Wellcome your choice is creating list " << endl;
			createNode();
			break;
		case 2:
			cout << " Wellcome your choice is Delete item the first " << endl;
			firstDelete();
			break;
		case 3:
			cout << " Wellcome your choice is delete item at the end " << endl;
			lastDelete();
			break;
		case 4:
			cout << "Wellcome your choice is NTH delete " << endl;
			NTH_delete();
			break;
		case 5:
			cout << "Wellcome your choice is display linked list " << endl;
			display();
			break;
		case 6:
			cout << " PROGRAM EXIT" << endl;
			break;
		}
	} while (choice != 6);
}
