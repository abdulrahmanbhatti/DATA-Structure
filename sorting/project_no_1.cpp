#include <iostream>
#include <string>
#include <ctime>
using namespace std;
    int  choice ;
    string notes[50];
    string todos[50];
    int count= 0;
    int noteCount = 0;
    int todoCount = 0;
void showTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current Time: ";
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}
void showDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current Date: ";
    cout << ltm->tm_mday << "/";
    cout << 1 + ltm->tm_mon << "/";
    cout << 1900 + ltm->tm_year << endl;
}
void calculator()
{
    int a, b;
    char op;

    cout << "\n--- Calculator ---\n";
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+ - * /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
    cin.ignore();

    switch (op)
    {
    case '+':
        cout << "Result: " << a + b << endl;
        break;
    case '-':
        cout << "Result: " << a - b << endl;
        break;
    case '*':
        cout << "Result: " << a * b << endl;
        break;
    case '/':
        if (b != 0)
            cout << "Result: " << a / b << endl;
        else
            cout << "Error: Division by zero!\n";
        break;
    default:
        cout << "Invalid operator!\n";
    }
}
void addNote()
{
    if (count >= 50)
    {
        cout << "Note storage full!\n";
        return;
    }

    cout << "Enter your note: ";
    getline(cin, notes[count]);
    count++;

    cout << "Note saved successfully.\n";
}
void viewNotes()
{
    if (count == 0)
    {
        cout << "No notes available.\n";
        return;
    }

    cout << "\n--- Your Notes ---\n";
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << notes[i] << endl;
    }
}
void to_do_List()
{
    int choice;
    int  tcount=0;
    cout << "\n--- TO DO LIST ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1)
    {
        if (tcount >= 50)
        {
            cout << "Task list full!\n";
            return;
        }
        cout << "Enter task: ";
        getline(cin, todos[tcount]);
        tcount++;
        cout << "Task added.\n";
    }
    else if (choice == 2)
    {
        if (tcount == 0)
        {
            cout << "No tasks available.\n";
            return;
        }
        cout << "\n--- Tasks ---\n";
        for (int i = 0; i < tcount; i++)
        {
            cout << i + 1 << ". " << todos[i] << endl;
        }
    }
    else
    {
        cout << "Invalid choice!\n";
    }
}
int main (){
    do
    {
    cout << "\n--- Available Opion  ---\n";
    cout << "ENTER 1 FOR  Show current time\n";
    cout << "ENTER 2 FOR Show current date\n";
    cout << "ENTER 3 FOR Open calculator\n";
    cout << "ENTER 4 FOR Save a note\n";
    cout << "ENTER 5 FOR View notes\n";
    cout << "ENTER 6 FOR To-do list\n";
    cout << "ENTER 7 FOR  Exit assistant\n";
    cin>>choice ;
    switch (choice){
    	case 1:
    		cout<<" Wellcome your choice is Show current time"<<endl;
   			showTime();
    		break ;
    	case 2 :
    		cout<<" Wellcome your choice is Show current date"<<endl;
    		showDate();
    		break ;
    	case 3 :
    		cout<<" Wellcome your choice is  Open calculator "<<endl;
    		calculator();
    		break ;
    	case 4 :
    		cout<<" Wellcome your choice is Save a note "<<endl;
    		addNote();
    		break ;
    	case 5 :
    		cout<<" Wellcome your choice is  View notes"<<endl;
    		 viewNotes();
    		break ;
    	case 6 :
    		cout<<" Wellcome your choice is To-do list "<<endl;
    		to_do_List();
    		break ;
    	case 7 :
    		cout<<" Wellcome your choice is Exit assistant "<<endl;
    		break ;
    		
	}
   

}	while ( choice !=7);
}
