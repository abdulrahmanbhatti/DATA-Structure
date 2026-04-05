#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Function Prototypes
void greeting();
void showTime();
void showDate();
void calculator();
void addNote(string notes[], int &count);
void viewNotes(string notes[], int count);
void todoList(string todos[], int &tcount);
void help();

// Main Function
int main()
{
    string command;
    string notes[50];
    string todos[50];
    int noteCount = 0;
    int todoCount = 0;
    char choice;

    greeting();

    do
    {
        cout << "\n----------------------------------";
        cout << "\nEnter Command (type 'help' for list): ";
        getline(cin, command);

        if (command == "hello" || command == "hi")
        {
            cout << "Assistant: Hello! How can I help you?\n";
        }
        else if (command == "time")
        {
            showTime();
        }
        else if (command == "date")
        {
            showDate();
        }
        else if (command == "calculator")
        {
            calculator();
        }
        else if (command == "add note")
        {
            addNote(notes, noteCount);
        }
        else if (command == "view notes")
        {
            viewNotes(notes, noteCount);
        }
        else if (command == "todo")
        {
            todoList(todos, todoCount);
        }
        else if (command == "help")
        {
            help();
        }
        else if (command == "exit")
        {
            cout << "Assistant: Goodbye! Have a nice day ??\n";
            break;
        }
        else
        {
            cout << "Assistant: Sorry, I don't understand that command.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

// Greeting Function
void greeting()
{
    cout << "=====================================\n";
    cout << "      VIRTUAL ASSISTANT (C++)\n";
    cout << "=====================================\n";
    cout << "Assistant: Hello! I am your virtual assistant.\n";
    cout << "Assistant: Type 'help' to see available commands.\n";
}

// Time Function
void showTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current Time: ";
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

// Date Function
void showDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current Date: ";
    cout << ltm->tm_mday << "/";
    cout << 1 + ltm->tm_mon << "/";
    cout << 1900 + ltm->tm_year << endl;
}

// Calculator Function
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

// Add Note Function
void addNote(string notes[], int &count)
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

// View Notes Function
void viewNotes(string notes[], int count)
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

// To-Do List Function
void todoList(string todos[], int &tcount)
{
    int choice;

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

// Help Function
void help()
{
    cout << "\n--- Available Commands ---\n";
    cout << "hello / hi      -> Greeting\n";
    cout << "time            -> Show current time\n";
    cout << "date            -> Show current date\n";
    cout << "calculator      -> Open calculator\n";
    cout << "add note        -> Save a note\n";
    cout << "view notes      -> View notes\n";
    cout << "todo            -> To-do list\n";
    cout << "help            -> Show commands\n";
    cout << "exit            -> Exit assistant\n";
}
