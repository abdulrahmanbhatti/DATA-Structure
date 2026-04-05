#include <iostream>
using namespace std;
int value;
struct Node
{
	int item;
	Node *Next;
	Node *previous;
};
Node *head = NULL;
Node *last = NULL;
void createNode()
{
	char ch = 'y';
	while (ch == 'y')
	{
		Node *Tnode = new Node;
		cout << "Enter value  " << endl;
		cin >> value;
		Tnode->item = value;
		Tnode->Next = NULL;
		Tnode->previous = NULL;
		if (head == NULL)
		{
			head = Tnode;
			last = Tnode;
		}
		else
		{
			last->Next = Tnode;
			Tnode->previous = last;
			last = Tnode;
		}
		cout << " if you want to create node then enter y/n" << endl;
		cin >> ch;
	}
}
void display()
{
	if (head == NULL)
	{
		cout << " the list is not exist" << endl;
	}
	else
	{
		Node *cnode = head;
		while (cnode != NULL)
		{
			cout << "--->" << cnode->item;
			cnode = cnode->Next;
		}
		cout << " " << endl;
		cnode = last;
		while (cnode != NULL)
		{
			cout << "-->" << cnode->item;
			cnode = cnode->previous;
		}
	}
}
void FirstInsert()
{
	if (head == NULL)
	{
		cout << " list is not exist " << endl;
	}
	else
	{
		Node *Tnode = new Node;
		cout << " Enter the value " << endl;
		cin >> value;
		Tnode->item = value;
		Tnode->Next = head;
		Tnode->previous = NULL;
		head->previous = Tnode;
		head = Tnode;
	}
}
void lastInsert()
{
	if (head == NULL)
	{
		cout << " list is not exist " << endl;
	}
	else
	{
		Node *Tnode = new Node;
		cout << " Enter the value " << endl;
		cin >> value;
		Tnode->item = value;
		Tnode->Next = NULL;
		Tnode->previous = NULL;
		Node *cnode = head;
		while (cnode->Next != NULL)
		{
			cnode = cnode->Next;
		}
		cnode->Next = Tnode;
		Tnode->previous = cnode;
		last = Tnode;
	}
}
void Nth_insert()
{
	int position;
	if (head == NULL)
	{
		cout << "list is not exist " << endl;
	}
	else
	{
		cout << " Enter position" << endl;
		cin >> position;
		Node *Tnode = new Node;
		cout << " Enter the value " << endl;
		cin >> value;
		Tnode->item = value;
		Tnode->Next = NULL;
		Tnode->previous = NULL;
		if (position == 1)
		{
			Tnode->Next = head;
			Tnode->previous = NULL;
			head->previous = Tnode;
			head = Tnode;
		}
		else
		{
			int count = 0;
			Node *cnode = head;
			while (cnode != NULL)
			{
				count++;
				cnode = cnode->Next;
			}
			if (position == count + 1)
			{
				Node *cnode = head;
				while (cnode->Next != NULL)
				{
					cnode = cnode->Next;
				}
				cnode->Next = Tnode;
				Tnode->previous = cnode;
				last = Tnode;
			}
			else
			{
				if (position > count + 1)
				{
					cout << " Position is not exist " << endl;
				}
				else
				{
					Node *cnode = head;
					for (int i = 1; i <= position - 2; i++)
					{
						cnode = cnode->Next;
					}
					cnode->Next->previous = Tnode;
					Tnode->Next = cnode->Next;
					Tnode->previous = cnode;
					cnode->Next = Tnode;
				}
			}
		}
	}
}

int main()
{
	int choice;
	do
	{
		cout << "\nEnter 1 for create a node " << endl;
		cout << "Enter 2 for item insert at first " << endl;
		cout << "Enter 3 for item insert at last " << endl;
		cout << "Enter 4 for NTH insert " << endl;
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
			cout << " Wellcome your choice is insert item the first " << endl;
			FirstInsert();
			break;
		case 3:
			cout << " Wellcome your choice is insert item at the end " << endl;
			lastInsert();
			break;
		case 4:
			cout << "Wellcome your choice is NTH insert " << endl;
			Nth_insert();
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
