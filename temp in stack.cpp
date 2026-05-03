#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T value)
    {
        if(top == 99)
            throw "Stack Overflow!";
        arr[++top] = value;
    }

    void pop()
    {
        if(top == -1)
            throw "Stack Underflow!";
        top--;
    }

    T peek()
    {
        if(top == -1)
            throw "Stack is Empty!";
        return arr[top];
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is Empty!\n";
            return;
        }

        cout << "Stack elements:\n";
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> s;
    int choice, val;

    while(true)
    {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try
        {
            switch(choice)
            {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                s.push(val);
                break;

            case 2:
                s.pop();
                cout << "Popped successfully.\n";
                break;

            case 3:
                cout << "Top element = " << s.peek() << endl;
                break;

            case 4:
                s.display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice!\n";
            }
        }
        catch(const char *msg)
        {
            cout << "Exception: " << msg << endl;
        }
    }
}
/*
--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter choice: 1
Enter value: 22

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter choice: 2
Popped successfully.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter choice: 3
Top element = Exception: Stack is Empty!

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter choice: 4
Stack is Empty!

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter choice: 5 */
